@class NSString, IESECTextMargin;

@interface IESECTextStyle : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) long long line;
@property (nonatomic) double verticalOffSet;
@property (retain, nonatomic) IESECTextMargin *textMargin;
@property (nonatomic) BOOL disableLargeFontScale;
@property (nonatomic) BOOL monoSpaced;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
