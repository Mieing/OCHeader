@interface TIMXDBMessageConvertor : NSObject

+ (void)convertMessageTemplateToDBMessage_Basic:(id)a0 dbMessage:(id)a1 root:(id)a2;
+ (void)applyLocalInfoDictionaryWithMessageTemplate:(id)a0 dbMessage:(id)a1 fileIDs:(id)a2;
+ (void)applySenderInfoWithMessageTemplate:(id)a0 dbMessage:(id)a1 root:(id)a2;
+ (void)applyExtWithMessageTemplate:(id)a0 dbMessage:(id)a1;
+ (void)applyStatusWithMessageTemplate:(id)a0 dbMessage:(id)a1;
+ (void)applyReferMessageInfoWithMessageTemplate:(id)a0 dbMessage:(id)a1 root:(id)a2;
+ (void)applyMessageStatusWithResponse:(id)a0 msg:(id)a1 rootObject:(id)a2;
+ (void)applyLocalExtWithResponse:(id)a0 msg:(id)a1 rootObject:(id)a2;
+ (id)convertMessageTemplateToDBMessage:(id)a0 root:(id)a1;
+ (void)applyResponseToDBMessage:(id)a0 response:(id)a1 root:(id)a2;

@end
