@class AWEMediaDownloadResultInnerItem, NSString, AWEMediaDownloadConfig;
@protocol AWEMediaDownloadStageDelegate;

@interface AWEMediaDownloadBaseStage : NSObject <AWEMediaDownloadStage>

@property (retain, nonatomic) AWEMediaDownloadConfig *config;
@property (weak, nonatomic) id<AWEMediaDownloadStageDelegate> delegate;
@property (retain, nonatomic) AWEMediaDownloadResultInnerItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stageWithConfig:(id)a0;

- (void)finishThenContinue;
- (void)cancelThenContinue;
- (void)failedThenContinueWithError:(id)a0;
- (void)prepareWithConfig:(id)a0;
- (long long)progressUnitCount;
- (void)doneThenContinue;
- (void).cxx_destruct;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;
- (BOOL)shouldRun;
- (void)run;
- (void)willRun;

@end
