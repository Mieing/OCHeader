@class IESECLinkConfig, NSString, NSArray, IESECTextStyle, NSNumber;

@interface IESECTextElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextStyle *textStyle;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLinkConfig *link;
@property (copy, nonatomic) NSArray *highlights;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long maxLines;
@property (nonatomic) unsigned long long textAlignment;
@property (retain, nonatomic) NSNumber *randomID;
@property (nonatomic) BOOL forceDefaultFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
