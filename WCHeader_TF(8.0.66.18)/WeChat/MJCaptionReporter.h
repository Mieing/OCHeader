@class MJCaptionReportInfo;

@interface MJCaptionReporter : NSObject

@property (nonatomic) double captionEditingStartTimestamp;
@property (readonly, nonatomic) MJCaptionReportInfo *captionReportInfo;

- (id)init;
- (void)markCaptionRecognitionFinishedWithAssetID:(id)a0 audioID:(id)a1 captionGroups:(id)a2 sttReportInfo:(id)a3 audioProcessTimeCost:(unsigned long long)a4;
- (void)markEditingStartedWithCaptionSegment:(id)a0;
- (void)markEditingFinishedWithCaptionSegment:(id)a0;
- (void)markWillRemoveCaptionSegment:(id)a0;
- (void)collectFinalCaptionResultWithStorylineVM:(id)a0 sessionID:(id)a1 postID:(id)a2 editID:(id)a3;
- (void).cxx_destruct;

@end
