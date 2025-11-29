@class NSString, UIColor;

@interface AWEHPTopTabTooBrightOptMaskConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double left;
@property (nonatomic) double right;
@property (copy, nonatomic) NSString *layerColorARGB;
@property (retain, nonatomic) UIColor *layerColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
