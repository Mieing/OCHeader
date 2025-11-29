@class NSArray, NSString;

@interface AWEECShoppingAIGuideComponentUIConfigItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *radiusArray;
@property (retain, nonatomic) NSArray *bgColorArray;
@property (retain, nonatomic) NSString *bgImgURLStr;
@property (retain, nonatomic) NSString *fontColorARGB;
@property (retain, nonatomic) NSString *borderColorARGB;
@property (retain, nonatomic) AWEECShoppingAIGuideComponentUIConfigItem *selectedConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectedConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
