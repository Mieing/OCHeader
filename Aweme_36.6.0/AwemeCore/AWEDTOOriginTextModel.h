@class NSString;

@interface AWEDTOOriginTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL isOriginText;
@property (copy, nonatomic) NSString *bgEffectId;
@property (nonatomic) long long initType;
@property (copy, nonatomic) NSString *hashtagText;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL isAiText;
@property (nonatomic) long long tabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
