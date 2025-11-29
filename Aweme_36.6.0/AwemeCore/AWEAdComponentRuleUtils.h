@interface AWEAdComponentRuleUtils : NSObject

+ (BOOL)isFullScreenComponent:(id)a0 originComponent:(id)a1;
+ (BOOL)isParentView:(id)a0 ofView:(id)a1 originComponent:(id)a2;
+ (BOOL)isViewAnimationing:(id)a0;
+ (id)realViewWithItem:(id)a0 originComponent:(id)a1;
+ (id)findLynxViewInView:(id)a0 itemView:(id)a1 originComponent:(id)a2;

@end
