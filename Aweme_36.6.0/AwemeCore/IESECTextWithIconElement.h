@class IESECBackgroundDescribeInfo, NSArray, IESECLinkConfig, NSString, IESECImageModel, IESECTextElement;

@interface IESECTextWithIconElement : IESECBasicElement

@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (retain, nonatomic) IESECImageModel *iconImage;
@property (retain, nonatomic) IESECTextElement *content;
@property (copy, nonatomic) NSArray *contentV2;
@property (nonatomic) unsigned long long iconDirection;
@property (nonatomic) BOOL halfAlphaAction;
@property (retain, nonatomic) IESECLinkConfig *link;
@property (nonatomic) double space;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSArray *otherStates;

+ (id)contentV2JSONTransformer;
+ (id)otherStatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
