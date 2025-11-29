@class NSString, NSDictionary;

@interface IESLiveMessageFeaturedAbilityItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL hasTrackedShow;

- (void).cxx_destruct;

@end
