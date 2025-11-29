@class NSMutableArray, NSMutableDictionary, MMFinderLiveTaskId;
@protocol MMFinderLiveNewAnchorTaskViewModelDelegate;

@interface MMFinderLiveNewAnchorTaskViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) long long showCardIndex;
@property (retain, nonatomic) NSMutableDictionary *targetProgressDic;
@property (retain, nonatomic) NSMutableArray *needGuideTargetTypes;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) BOOL shouldShowCompletePageAnchorNotice;
@property (weak, nonatomic) id<MMFinderLiveNewAnchorTaskViewModelDelegate> delegate;

- (id)initWithTaskId:(id)a0 scene:(unsigned int)a1;
- (void)dealloc;
- (void)getTasks:(id /* block */)a0;
- (unsigned int)getTaskStatus:(id)a0;
- (unsigned int)getTargetType:(id)a0;
- (id)getTargetTitle:(id)a0 needDot:(BOOL)a1;
- (id)getTargetWording:(id)a0 withScene:(unsigned int)a1;
- (unsigned int)getTargetStatus:(id)a0;
- (unsigned int)getTargetStatusOnStart:(id)a0;
- (unsigned int)getTargetStatusOnLive:(id)a0;
- (unsigned long long)getTargetProgress:(id)a0;
- (BOOL)shouldShowBonusBtn:(id)a0;
- (id)getBonusStringWithTask:(id)a0;
- (id)getBonusStringWithStage:(id)a0;
- (id)getRewardStr:(id)a0;
- (void)processTaskArray;
- (id)getTargetKey:(id)a0;
- (id)highLightBrandAttrString:(id)a0;
- (id)getAnchorTaskDesc:(id)a0;
- (void)onNewAnchorQuestUpdated:(id)a0 taskId:(id)a1;
- (id)liveTask;
- (void).cxx_destruct;

@end
