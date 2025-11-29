@class AWEFeedActivityTopBarItemConfig, NSString, NSArray, NSDictionary;

@interface AWEFeedActivityChannelInfoModel : MTLModel <MTLJSONSerializing, AWEFeedActivityChannelInfoProtocol>

@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, nonatomic) long long topTabTheme;
@property (readonly, nonatomic) long long bottomTabTheme;
@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, nonatomic) AWEFeedActivityTopBarItemConfig *topBarItemConfig;
@property (readonly, nonatomic) NSArray *badgeArray;
@property (readonly, nonatomic) NSArray *bubbleArray;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
