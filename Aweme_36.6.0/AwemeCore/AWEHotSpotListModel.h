@class NSString, NSDictionary;

@interface AWEHotSpotListModel : AWEBaseApiModel <AWEHotSpotBrandIconModelProtocol>

@property (copy, nonatomic) NSString *hotSpotTipTitle;
@property (copy, nonatomic) NSString *hotSpotTipIconURL;
@property (copy, nonatomic) NSString *tipSchema;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *i18NTipTitle;
@property (copy, nonatomic) NSString *hotSpotTipTitleHeader;
@property (copy, nonatomic) NSString *hotSpotTipTitleFooter;
@property (nonatomic) long long patternType;
@property (nonatomic) long long hotSpotRank;
@property (nonatomic) BOOL disableDisplay;
@property (nonatomic) BOOL disableDisplayInner;
@property (nonatomic) unsigned long long labelType;
@property (nonatomic) long long hotValue;
@property (nonatomic) long long viewCount;
@property (copy, nonatomic) NSString *sentenceGroupID;
@property (copy, nonatomic) NSString *hotInfoWord;
@property (nonatomic) long long sentenceID;
@property (copy, nonatomic) NSString *hotSentenceId;
@property (copy, nonatomic) NSString *relativityExtra;
@property (nonatomic) BOOL shouldShowNewBrandTag;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)verticalBoardTabModel;
- (BOOL)isStronglyRelated;
- (void).cxx_destruct;

@end
