@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWEAwemeTextExtraModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *captionStart;
@property (retain, nonatomic) NSNumber *captionEnd;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSString *hashtagId;
@property (nonatomic) BOOL isPriorHashtag;
@property (retain, nonatomic) NSString *hotSpotText;
@property (retain, nonatomic) NSString *hotSpotId;
@property (retain, nonatomic) NSString *awemeId;
@property (nonatomic) long long type;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long subtype;
@property (nonatomic) BOOL isCommerce;
@property (retain, nonatomic) NSNumber *stickerID;
@property (retain, nonatomic) AWEURLModel *stickerURL;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSString *liveData;
@property (retain, nonatomic) NSDictionary *liveDict;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSNumber *searchHideWords;
@property (retain, nonatomic) NSNumber *tagMentionNeedFold;
@property (retain, nonatomic) NSNumber *brandStatus;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *openURL;

+ (id)typeJSONTransformer;
+ (id)dictFromJsonString:(id)a0;
+ (id)liveDictJSONTransformer;
+ (id)stickerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
