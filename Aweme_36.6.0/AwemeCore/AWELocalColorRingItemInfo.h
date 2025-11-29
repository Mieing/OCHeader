@class NSString;

@interface AWELocalColorRingItemInfo : AWEBaseApiModel

@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL readStatus;
@property (nonatomic) BOOL fakeCreate;
@property (nonatomic) long long visibleScope;
@property (nonatomic) unsigned long long cfItemType;
@property (nonatomic) long long storyItemType;
@property (nonatomic) long long contentType;
@property (nonatomic) BOOL isStrangerStory;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
