@class NSString, MJPublisherContext;

@interface WCFinderRootEditVideoViewController : WCEditVideoViewController <WCFinderEditDataReportDelegate>

@property (nonatomic) unsigned long long enterTime;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateMusicId;
@property (copy, nonatomic) NSString *templateFollowFeedID;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) MJPublisherContext *publisherContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear:(BOOL)a0;
- (id)getReportExtInfoDismissState:(BOOL)a0 eventCode:(long long)a1;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (id)editResultComposition;
- (id)originalUrls;
- (struct CGPoint { double x0; double x1; })emotionOffset;
- (void)registerYReportSdk;
- (id)getSourceFeedId;
- (unsigned long long)getEnterScene;
- (id)getEditId;
- (void).cxx_destruct;

@end
