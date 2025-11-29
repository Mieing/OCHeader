@class NSString;

@interface AWEIndividualWordModel : AWEBaseApiModel <AWEIrregularWordProtocol, AWERegularWordProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *individualWordType;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *display;
@property (copy, nonatomic) NSString *highlight;
@property (copy, nonatomic) NSString *relInfo;
@property (copy, nonatomic) NSString *sarFrom;
@property (copy, nonatomic) NSString *relatedWordsType;
@property (nonatomic) BOOL ecpmBoostTag;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconHeight;
@property (copy, nonatomic) NSString *iconWidth;
@property (copy, nonatomic) NSString *contentPrefix;
@property (copy, nonatomic) NSString *windVaneImgUrl;
@property (copy, nonatomic) NSString *qrecForSearch;
@property (nonatomic) BOOL hasTrackedShow;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getContentString;
- (id)getDisplayWord;
- (id)getSearchWord;
- (id)getWordID;
- (id)getImageURL;
- (long long)defaultStyle;
- (void).cxx_destruct;

@end
