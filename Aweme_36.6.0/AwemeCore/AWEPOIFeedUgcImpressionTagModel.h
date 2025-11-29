@class NSString, NSValue, AWEURLModel;

@interface AWEPOIFeedUgcImpressionTagModel : MTLModel <AWEPOIDetailFeedUgcTagItemModelProtocol, MTLJSONSerializing>

@property (copy, nonatomic) NSString *truncatedText;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSValue *tagFrame;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) BOOL stopSelection;
@property (retain, nonatomic) NSValue *tagSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *impressionId;
@property (nonatomic) unsigned long long sentiment;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEURLModel *iconLight;
@property (retain, nonatomic) AWEURLModel *iconLightSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)requestParam;
- (id)requestParamDict;
- (BOOL)isDefaultMixTag;
- (BOOL)isSameWithTag:(id)a0;
- (id)requestParamKey;
- (long long)tagCount;
- (BOOL)hasIcon;
- (void).cxx_destruct;
- (BOOL)borderStyle;
- (id)tagName;

@end
