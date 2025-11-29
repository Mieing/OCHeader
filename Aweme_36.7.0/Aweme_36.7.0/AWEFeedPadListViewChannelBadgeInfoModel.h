@class NSString;

@interface AWEFeedPadListViewChannelBadgeInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;
@property (readonly, copy, nonatomic) NSString *badgeText;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
