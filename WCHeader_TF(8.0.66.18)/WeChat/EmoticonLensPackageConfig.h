@class UIColor, NSString, NSArray, NSDictionary;

@interface EmoticonLensPackageConfig : NSObject <YYModel>

@property (nonatomic) double version;
@property (nonatomic) long long previewType;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) NSArray *paramsList;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (void).cxx_destruct;

@end
