@class NSString, NSDictionary;

@interface CJPayUnifyPreFlowResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (nonatomic) unsigned long long preFlowType;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSDictionary *jhConfirmParams;
@property (copy, nonatomic) NSDictionary *confirmParams;
@property (copy, nonatomic) NSDictionary *createAgainParams;

- (void).cxx_destruct;

@end
