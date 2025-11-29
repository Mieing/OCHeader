@class VoipRecentStatusImagesView, NSArray, NSString, NSMutableArray;

@interface VoipRecentStatusSNSImagesView : UIView <WCFacadeExt, VoipRecentStatusProperties>

@property (retain, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) VoipRecentStatusImagesView *imagesView;
@property (retain, nonatomic) NSMutableArray *dotViews;
@property (copy, nonatomic) id /* block */ didSlideImagesCallback;
@property (nonatomic) BOOL isSoundBtnHidden;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWCDataItem:(id)a0;
- (void)layoutSubviews;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end
