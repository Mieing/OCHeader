@class MJPublisherContext, NSString, NSArray, MJPublisherPickerComposingButtonManager, MJTemplateComposingDelegateImpl, MJMovieComposingAssetsClassifyHelper, FinderVideoTemplateInfo, OMJPublisherSessionMetrics, MJMusicDownloader;

@interface MJPublisher : NSObject

@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) MJPublisherContext *publisherContext;
@property (readonly, nonatomic) MJTemplateComposingDelegateImpl *templateComposingDelegateImpl;
@property (readonly, nonatomic) MJPublisherPickerComposingButtonManager *pickerComposingButtonManager;
@property (retain, nonatomic) OMJPublisherSessionMetrics *publisherSessionMetrics;
@property (retain, nonatomic) NSArray *followMusicIDs;
@property (retain, nonatomic) MJMusicDownloader *musicDownloader;
@property (retain, nonatomic) MJMovieComposingAssetsClassifyHelper *assetClassifyHelper;
@property (retain, nonatomic) FinderVideoTemplateInfo *templateInfo;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) double videoClipStartTimeForFinderRedPackageEntry;

+ (id)publisherNamed:(id)a0;
+ (void)registerPublisher:(id)a0 named:(id)a1;
+ (void)releasePublisherNamed:(id)a0;
+ (BOOL)shouldShowRegularGuide;
+ (void)didAcceptRegularGuide;
+ (BOOL)checkIsMJAsyncCompositionTask:(id)a0;

- (id)init;
- (void)dealloc;
- (id)createShootComposingVCWithViewModel:(id)a0;
- (id)createShootComposingViewModelWithBizScene:(unsigned long long)a0;
- (void)createPublisherSessionMetricsWithEntryType:(id)a0 enterScene:(unsigned long long)a1 parentEnterScene:(int)a2 startupOptions:(id)a3;
- (void)destoryPublisherSessionMetricsWithReason:(id)a0;
- (void)markWillBeginShootComposing;
- (void)markDidEndShootComposingWithReason:(id)a0 shouldDestoryPublisherSession:(BOOL)a1;
- (void)markWillBeginMovieComposing;
- (void)markDidEndMovieComposingWithReason:(id)a0 shouldDestoryPublisherSession:(BOOL)a1;
- (void)createPostSessionWithEditImageAttr:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1 fromScene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)createPostSessionWithActionFlow:(id)a0 fromScene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)createPostSessionWithSightDraft:(id)a0 fromScene:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)processWithSightDraft:(id)a0 finderTask:(id)a1 fromScene:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onShootComposingVCDidDismissSelfFinished:(id)a0;
- (void).cxx_destruct;

@end
