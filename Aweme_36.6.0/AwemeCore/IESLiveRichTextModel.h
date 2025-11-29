@class NSString, NSDictionary, IESLiveImage, NSNumber;

@interface IESLiveRichTextModel : IESLiveDynamicMTLModel <MTLJSONSerializing, IESLiveRichTextModel>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveImage *img;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) NSString *fontColor;
@property (retain, nonatomic) NSNumber *weight;
@property (readonly, nonatomic) long long modelType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPBModel:(id)a0;
- (id)initWithType:(id)a0 text:(id)a1 image:(id)a2 fontSize:(long long)a3 fontColor:(id)a4 weight:(long long)a5;
- (id)attributes;

@end
