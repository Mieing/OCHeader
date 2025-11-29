@class NSString;

@interface MMLiveUserStateItem : NSObject

@property (readonly, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *headImageUrl;
@property (readonly, nonatomic) unsigned long long disableCommentDef;
@property (readonly, nonatomic) unsigned long long rewardAmountInHeat;

- (void).cxx_destruct;

@end
