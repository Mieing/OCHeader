@class UIFont, NSString, IESSoloKTVTemplateBorderModel, NSMutableArray;

@interface IESSoloKTVTemplateAttributeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *fontURL;
@property (nonatomic) double fontSizePX;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSMutableArray *colors;
@property (retain, nonatomic) IESSoloKTVTemplateBorderModel *border;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *fontPX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorsJSONTransformer;
+ (id)borderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)getNSAlignment;
- (id)getColorFrame:(int)a0;
- (void).cxx_destruct;

@end
