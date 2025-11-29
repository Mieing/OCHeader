@class NSString, NSValue;

@interface ActionLivenessVCContext : NSObject

@property (copy, nonatomic) NSString *boardStr;
@property (copy, nonatomic) NSString *cicleStr;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSValue *faceBox;
@property (nonatomic) int timeRemaind;
@property (nonatomic) long long stateMachineStage;
@property (nonatomic) int actionNumber;
@property (nonatomic) int detectResultCode;
@property (nonatomic) unsigned long long category;

- (void).cxx_destruct;

@end
