@class IESLLTempoThreadSafeDictionary;

@interface IESLLTempoWidgetManager : NSObject

@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *widgetMap;

+ (void)registerWidget:(Class)a0;
+ (Class)getWidgetByTagName:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
