@class WCLivePhotoBrowseReport, WCMomentsPageContext;

@interface WCMediaImageViewModel : NSObject

@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly, nonatomic) BOOL isLivePhoto;
@property (retain, nonatomic) WCLivePhotoBrowseReport *livePhotoBrowseReport;

+ (id)viewModelWithMediaItem:(id)a0;
+ (id)viewModelWithMMImage:(id)a0;

- (void)fillExtraDataInImageMaterial:(id)a0;
- (void).cxx_destruct;

@end
