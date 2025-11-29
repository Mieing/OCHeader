@class NSArray, NSString;

@interface AWESearchFoldGradientIconViewConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *gradientBGColorLight;
@property (copy, nonatomic) NSArray *gradientBGColorDark;
@property (copy, nonatomic) NSString *btnBGColorLight;
@property (copy, nonatomic) NSString *btnBGColorDark;
@property (copy, nonatomic) NSString *btnTextColorLight;
@property (copy, nonatomic) NSString *btnTextColorDark;
@property (retain, nonatomic) NSString *iconImageLight;
@property (retain, nonatomic) NSString *iconImageDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
