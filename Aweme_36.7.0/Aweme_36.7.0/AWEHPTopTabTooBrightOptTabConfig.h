@class NSString, UIColor;

@interface AWEHPTopTabTooBrightOptTabConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double left;
@property (nonatomic) double right;
@property (copy, nonatomic) NSString *labelShadowColorARGB;
@property (copy, nonatomic) NSString *unselectedDarkTextColorARGB;
@property (retain, nonatomic) UIColor *labelShadowColor;
@property (retain, nonatomic) UIColor *unselectedDarkTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
