@interface AWEHotSearchCommentTracker : NSObject

+ (id)commonParamsWithContext:(id)a0;
+ (void)trackEvent:(id)a0 cellModel:(id)a1 logExtra:(id)a2;
+ (id)commonParamsWithSectionContext:(id)a0;
+ (void)trackEvent:(id)a0 context:(id)a1 logExtra:(id)a2;
+ (id)getTabNameWithOuterType:(long long)a0 feedType:(long long)a1;
+ (id)getTabName:(long long)a0;
+ (void)transmissionCommentEventWithLogExtra:(id)a0 attachToObject:(id)a1;
+ (id)commonParamsWithCellModel:(id)a0;
+ (id)clickAreaWithClickType:(long long)a0;
+ (id)clickTypeMap;

@end
