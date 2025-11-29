@class NSString, UIColor;

@interface IESSoloKTVTemplateColorItemModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *color;
@property (nonatomic) float alpha;
@property (retain, nonatomic) UIColor *uiColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
