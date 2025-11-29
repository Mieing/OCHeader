@class NSString, HMSearchCondition;

@interface HMSearchParam : NSObject

@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) HMSearchCondition *condition;
@property (retain, nonatomic) id userInfo;

- (void).cxx_destruct;

@end
