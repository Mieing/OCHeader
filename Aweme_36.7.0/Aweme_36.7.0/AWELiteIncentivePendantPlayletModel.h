@class AWELuckyCatAdCollectTaskModel, NSArray, NSString, AWELuckyCatCoinAwardExit, AWELuckyCatPendant, AWELiteIncentivePendantTrackParams;

@interface AWELiteIncentivePendantPlayletModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatAdCollectTaskModel *adCollectTaskModel;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELuckyCatCoinAwardExit *coinAwardExitModel;
@property (nonatomic) unsigned long long nextLoopDuration;
@property (copy, nonatomic) NSArray *refreshScene;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *taskSchema;
@property (nonatomic) BOOL isBlock;
@property (retain, nonatomic) AWELiteIncentivePendantTrackParams *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
