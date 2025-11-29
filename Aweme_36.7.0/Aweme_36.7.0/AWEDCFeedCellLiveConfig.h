@class NSString;

@interface AWEDCFeedCellLiveConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL disablePlayLive;
@property (copy, nonatomic) NSString *livePreviewBizDomain;
@property (copy, nonatomic) NSString *livePreviewPageName;
@property (copy, nonatomic) NSString *livePreviewBlockName;
@property (copy, nonatomic) NSString *livePreviewIndex;
@property (copy, nonatomic) NSString *livePreviewEnterMethod;
@property (copy, nonatomic) NSString *livePreviewScene;
@property (copy, nonatomic) id /* block */ livePreviewClickCustomConfigBlock;

- (void).cxx_destruct;

@end
