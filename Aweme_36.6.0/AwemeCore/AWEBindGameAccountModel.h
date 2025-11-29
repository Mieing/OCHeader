@class NSString;

@interface AWEBindGameAccountModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameUserId;
@property (copy, nonatomic) NSString *roleId;
@property (copy, nonatomic) NSString *roleName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
