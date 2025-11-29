@class NSString, MMLiveTaskId;

@interface MMFinderLiveSubTitleModel : NSObject <MMFinderLiveSubTitleSynchronizeExt>

@property (retain, nonatomic) NSString *currChnSession;
@property (retain, nonatomic) NSString *currEngSession;
@property (nonatomic) long long lastChnIndex;
@property (nonatomic) long long lastEngIndex;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onSynchronizedFinderLiveSubTitle:(id)a0 taskId:(id)a1;
- (void).cxx_destruct;

@end
