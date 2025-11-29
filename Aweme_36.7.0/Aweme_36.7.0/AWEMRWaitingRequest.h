@class NSString, AWEMessageReachRequestParamModel;

@interface AWEMRWaitingRequest : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEMessageReachRequestParamModel *paramModel;
@property (copy, nonatomic) NSString *triggerEvent;
@property (copy, nonatomic) id /* block */ reqParamsCollectBlock;

- (id)initWithTriggerEvent:(id)a0 paramModel:(id)a1;
- (void).cxx_destruct;

@end
