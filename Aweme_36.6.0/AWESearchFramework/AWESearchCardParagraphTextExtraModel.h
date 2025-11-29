@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWESearchCardParagraphTextExtraModel : NSObject

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *captionStart;
@property (retain, nonatomic) NSNumber *captionEnd;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSString *hashtagId;
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
@property (copy, nonatomic) NSString *searchQueryId;
@property (nonatomic) long long searchRank;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSNumber *searchHideWords;
@property (retain, nonatomic) NSNumber *tagMentionNeedFold;
@property (retain, nonatomic) NSNumber *brandStatus;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *openURL;

- (id)translateAwemeTextExtra:(id)a0;
- (id)translateTextExtra:(id)a0;
- (void).cxx_destruct;

@end
