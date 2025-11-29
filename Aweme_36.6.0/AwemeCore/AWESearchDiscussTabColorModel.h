@class NSString, AWESearchDiscussTabCardColorThemeModel;

@interface AWESearchDiscussTabColorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchDiscussTabCardColorThemeModel *lightTheme;
@property (retain, nonatomic) AWESearchDiscussTabCardColorThemeModel *darkTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)darkThemeJSONTransformer;
+ (id)lightThemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
