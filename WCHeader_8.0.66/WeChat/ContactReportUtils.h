@interface ContactReportUtils : NSObject

+ (unsigned int)getSendVerifyReportEnterSceneWithFriendScene:(unsigned int)a0 uiContactInfoViewSource:(unsigned int)a1;
+ (unsigned int)getContactInfoViewGetContactSceneWithContactInfoViewFromScene:(unsigned int)a0;
+ (void)reportContactRelationUpdateDoActionWithRequestPage:(unsigned int)a0 toUserNames:(id)a1 requestContent:(unsigned int)a2;
+ (void)reportContactRelationUpdateActionWithRequestPage:(unsigned int)a0 toUserNames:(id)a1 eventType:(unsigned int)a2 requestContent:(unsigned int)a3 returnCode:(int)a4;

@end
