@class AWEFeedActivityTopBarItemConfig, NSString, NSArray, NSDictionary;

@interface AWEHPRealTimeActivityChannelInfo : MTLModel <MTLJSONSerializing, AWEFeedActivityChannelInfoProtocol>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activitySchema;
@property (readonly, nonatomic) long long topTabTheme;
@property (readonly, nonatomic) long long bottomTabTheme;
@property (retain, nonatomic) AWEFeedActivityTopBarItemConfig *topBarItemConfig;
@property (retain, nonatomic) NSArray *badgeArray;
@property (retain, nonatomic) NSArray *bubbleArray;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeArrayJSONTransformer;
+ (id)topBarItemConfigJSONTransformer;
+ (id)bubbleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
