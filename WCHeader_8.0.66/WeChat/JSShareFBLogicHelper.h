@class NSString, ShareConfirmView;
@protocol JSShareFBLogicHelperDelegate;

@interface JSShareFBLogicHelper : MMObject <ShareConfirmViewDelegate, PBMessageObserverDelegate> {
    ShareConfirmView *_confirmView;
    unsigned int fbEventID;
}

@property (weak, nonatomic) id<JSShareFBLogicHelperDelegate> delegate;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *thumbImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 link:(id)a1 description:(id)a2 thumbURL:(id)a3;
- (void)dealloc;
- (void)initConfirmViewWithTitle:(id)a0 description:(id)a1 thumbURL:(id)a2;
- (void)showConfirmView;
- (void)OnSend:(id)a0;
- (void)OnCancel:(id)a0;
- (void)OnError:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)rotateToOrientaion:(long long)a0;
- (void).cxx_destruct;

@end
