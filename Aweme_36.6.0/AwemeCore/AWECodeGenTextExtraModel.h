@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenTextExtraModel : AWEBaseDataModel

@property (nonatomic) int start;
@property (nonatomic) int end;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *hashtagName;
@property (copy, nonatomic) NSString *hashtagId;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *hashtagname;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) long long stickerId;
@property (retain, nonatomic) AWECodeGenUrlModel *stickerUrlModel;
@property (nonatomic) int stickerSource;
@property (copy, nonatomic) NSString *stickerUri;
@property (nonatomic) int stickerWidth;
@property (nonatomic) int stickerHeight;
@property (nonatomic) int subType;
@property (copy, nonatomic) NSString *liveData;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *searchQueryId;
@property (nonatomic) int searchRank;
@property (nonatomic) long long musicId;
@property (nonatomic) int searchHideWords;
@property (copy, nonatomic) NSString *fansLuckyDrawId;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *sentenceId;
@property (copy, nonatomic) NSString *hotspotText;
@property (copy, nonatomic) NSString *relatedSentence;
@property (copy, nonatomic) NSString *customizeRichText;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *iconUrlLight;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (nonatomic) int iconLength;
@property (nonatomic) int iconHorizontalPosition;
@property (nonatomic) int iconVerticalPosition;
@property (nonatomic) BOOL isHideIcon;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) int captionStart;
@property (nonatomic) int captionEnd;
@property (nonatomic) int tagMentionNeedFold;
@property (nonatomic) int brandStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
