@class NSString;

@interface AWEYAPRPConditionCheckInfo : AWEBaseApiModel

@property (nonatomic) BOOL canRecv;
@property (copy, nonatomic) NSString *recvButtonDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
