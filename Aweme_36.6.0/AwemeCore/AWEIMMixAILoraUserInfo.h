@class NSString;

@interface AWEIMMixAILoraUserInfo : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *modelID;
@property (nonatomic) long long roleType;
@property (nonatomic) long long slotCreateTime;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
