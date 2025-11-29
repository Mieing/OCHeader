@class NSValue, NSString;

@interface AWEPOIFeedUgcTagModel : MTLModel <AWEPOIDetailFeedUgcTagItemModelProtocol, MTLJSONSerializing>

@property (nonatomic) BOOL isExpandButton;
@property (nonatomic) long long expandButtonIndex;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSValue *tagFrame;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) BOOL stopSelection;
@property (retain, nonatomic) NSValue *tagSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long optionType;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) unsigned long long sortBy;
@property (nonatomic) unsigned long long filterBy;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRequestParamKey;
+ (id)defaultRequestParamKey;
+ (id)defaultRequestParam;
+ (id)defaultRequestParam;
+ (id)JSONKeyPathsByPropertyKey;

- (id)requestParam;
- (id)requestParam;
- (id)requestParamDict;
- (BOOL)isDefaultMixTag;
- (BOOL)isSameWithTag:(id)a0;
- (id)requestParamKey;
- (id)requestParamKey;
- (long long)tagCount;
- (void).cxx_destruct;
- (id)tagName;

@end
