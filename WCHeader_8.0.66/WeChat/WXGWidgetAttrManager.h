@class NSDictionary;

@interface WXGWidgetAttrManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *viewClassNameMap;
@property (readonly, copy, nonatomic) NSDictionary *textAlignmentMap;
@property (readonly, copy, nonatomic) NSDictionary *lineBreakModeMap;
@property (readonly, copy, nonatomic) NSDictionary *contentModeMap;

+ (id)sharedInstance;
+ (id)getClassNameByTag:(id)a0;
+ (void)wxgWidgetView:(id)a0 setAttrWithName:(id)a1 value:(id)a2 hostView:(id)a3;
+ (BOOL)wxgAttrPreprocessOrBindToView:(id)a0 withAttrName:(id)a1 attrValue:(id *)a2 hostView:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
