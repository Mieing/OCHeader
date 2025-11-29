@class NSString;

@interface BDUGFlowToastMsgModel : BDUGFlowBasicModel

@property (copy, nonatomic) NSString *freeflowNormalMsg;
@property (copy, nonatomic) NSString *freeflowWillUseupMsg;
@property (copy, nonatomic) NSString *freeflowUsedupMsg;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toJsonDictionary;

@end
