@class NSArray;

@interface AWETemplateTagsUIConfig : NSObject

@property (nonatomic) long long containerTemplate;
@property (retain, nonatomic) NSArray *elementMap;

+ (BOOL)supportMultiContainer;
+ (id)templateAvailable;
+ (id)getElementMapWithTemplate:(long long)a0;
+ (id)defaultContainerStyleModel;
+ (id)defaultTextStyleModel;
+ (id)defaultMultiTextStyleModel;
+ (id)defaultImageStyleModel;
+ (id)defaultMultiImageStyleModel;
+ (id)builtInTemplateAvailable;
+ (id)elementMapForTemplate0;
+ (id)elementMapForTemplate1;
+ (id)elementMapForTemplate2;
+ (id)elementMapForTemplate3;
+ (id)elementMapForTemplate4;

- (void).cxx_destruct;

@end
