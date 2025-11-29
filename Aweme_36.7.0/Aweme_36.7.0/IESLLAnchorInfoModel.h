@class NSString, NSDictionary, IESLLPOIInfoModel, IESLLifeURLModel;

@interface IESLLAnchorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *cacheExtraDict;
@property (retain, nonatomic) NSDictionary *logExtraDic;
@property (retain, nonatomic) NSDictionary *extraDic;
@property (retain, nonatomic) IESLLPOIInfoModel *cachePoiInfo;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *displayMessage;
@property (nonatomic) unsigned long long anchorType;
@property (retain, nonatomic) IESLLifeURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *mpURL;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *lifeAnchorType;
@property (copy, nonatomic) NSString *searchAnchorMessage;
@property (copy, nonatomic) NSDictionary *firstCustomSticker;
@property (copy, nonatomic) NSString *ecomContent;
@property (nonatomic) BOOL isCommerceIntention;
@property (nonatomic) BOOL isAdLifePromote;
@property (readonly, nonatomic) BOOL isLokiAnchor;
@property (copy, nonatomic) NSString *lokiComponent;
@property (nonatomic) BOOL isShowInteractionMode;
@property (retain, nonatomic) NSDictionary *instantAnchorExtra;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) NSDictionary *lifeShareExtClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poiInfo;
- (id)extraDict;
- (id)_logExtraDictionary;
- (id)lifeShareExt;
- (void)updatePoiInfo:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
