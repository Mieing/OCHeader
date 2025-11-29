@class NSString, IESLivePSComponentConfigModel, HTSLiveImage, GPBMessage, NSMutableArray;

@interface IESLiveMessageTrayAggregationModel : NSObject

@property (nonatomic) long long currentTriggerTime;
@property (copy, nonatomic) NSString *currentContent;
@property (nonatomic) long long currentCount;
@property (retain, nonatomic) HTSLiveImage *aggregationIcon;
@property (retain, nonatomic) GPBMessage *message;
@property (nonatomic) BOOL disableAnimation;
@property (weak, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) NSMutableArray *messages;

- (void)disappearMatchHotTray:(id)a0;
- (BOOL)checkValidMessage:(id)a0;
- (id)initWithMatchHotMessage:(id)a0;
- (BOOL)doMergeMessage:(id)a0;
- (BOOL)isNewBatchData:(id)a0;
- (void)consumeMessage:(id)a0;
- (void).cxx_destruct;

@end
