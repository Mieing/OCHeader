@interface WCFinderSeeLaterHelper : NSObject

+ (void)didDelete:(id)a0 commentScene:(int)a1;
+ (void)confirmToDeleteSeeLaterFeed:(id)a0 view:(id)a1 commentScene:(int)a2;
+ (void)reportSeeLaterDeleteConfirmElementWithEventType:(long long)a0 feedID:(id)a1 commentScene:(int)a2;
+ (void)reportSeeLaterCardEventType:(long long)a0 contentVM:(id)a1 commentScene:(int)a2 showWord:(id)a3;
+ (void)reportAllSeeLaterHeaderEventType:(long long)a0 commentScene:(int)a1;

@end
