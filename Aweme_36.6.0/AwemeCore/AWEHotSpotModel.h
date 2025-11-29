@class NSString, NSNumber;

@interface AWEHotSpotModel : AWEBaseApiModel <AWEHotSpotBrandIconModelProtocol>

@property (copy, nonatomic) NSString *sentenceID;
@property (copy, nonatomic) NSString *hotSpotWord;
@property (nonatomic) long long hotSpotHotValue;
@property (nonatomic) long long hotSpotRank;
@property (nonatomic) BOOL isAD;
@property (readonly, copy, nonatomic) NSString *aladdinID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long videoCount;
@property (nonatomic) long long liveCount;
@property (copy, nonatomic) NSNumber *likeCount;
@property (nonatomic) double updateTime;
@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) NSString *header;
@property (nonatomic) BOOL grayFontColor;
@property (copy, nonatomic) NSString *listTitle;
@property (copy, nonatomic) NSString *listSchema;
@property (copy, nonatomic) NSString *badgeHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aladdinIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)verticalBoardTabModel;
- (void).cxx_destruct;

@end
