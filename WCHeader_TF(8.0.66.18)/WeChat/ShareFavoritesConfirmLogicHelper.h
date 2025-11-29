@class NSString, NSDictionary, FavoritesItem, NSData, ShareConfirmView;
@protocol ShareFavoritesConfirmLogicHelperDelegate;

@interface ShareFavoritesConfirmLogicHelper : MMObject <ShareConfirmViewDelegate> {
    ShareConfirmView *_confirmView;
    BOOL _hasBeenHidden;
}

@property (weak, nonatomic) id<ShareFavoritesConfirmLogicHelperDelegate> delegate;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (retain, nonatomic) NSDictionary *userData;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSData *fileData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavoritesItem:(id)a0;
- (void)dealloc;
- (void)showConfirmView;
- (void)hideConfirmView;
- (void)rotateToCurrentOrietation;
- (void)rotateToOrientaion:(long long)a0;
- (void)layoutSubviewToOrientation:(long long)a0;
- (void)OnSend:(id)a0;
- (void)handleDoFavEnd;
- (void)OnCancel:(id)a0;
- (void)OnError:(id)a0;
- (void)OnBackToApp:(id)a0;
- (void).cxx_destruct;

@end
