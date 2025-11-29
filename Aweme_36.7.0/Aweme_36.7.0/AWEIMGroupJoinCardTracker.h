@interface AWEIMGroupJoinCardTracker : NSObject

+ (void)trackCardTypeShow:(id)a0;
+ (void)trackCardShareGroupShow:(id)a0;
+ (void)trackCardTypeClickWithModel:(id)a0 conversation:(id)a1;
+ (void)trackCardShareGroupClick:(id)a0;
+ (void)trackCardChatIntroClick:(id)a0;
+ (void)trackCardJoinAllowanceClick:(id)a0;
+ (void)trackCardGroupAddClickClick:(id)a0;
+ (void)trackCardTypeClose:(id)a0;
+ (id)convertTypeToTrackerStringWithModel:(id)a0;

@end
