@class NSString, AWEECOMIMImageLabelModel;

@interface AWEECOMIMGoodsCardLabelsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWEECOMIMImageLabelModel *imageModel;
@property (nonatomic) unsigned long long showLabelType;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
