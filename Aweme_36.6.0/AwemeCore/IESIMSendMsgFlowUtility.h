@interface IESIMSendMsgFlowUtility : NSObject

+ (id)makeSendMsgSecurityCheckContextWithCid:(id)a0;
+ (id)buildCommonLocalExt:(int)a0 fileID:(id)a1 filePath:(id)a2;
+ (id)buildLiveConsultChatSyncedExt:(id)a0;
+ (id)calculateMD5WithPath:(id)a0;
+ (unsigned long long)attachmentNodeTypeForNodeID:(id)a0;
+ (id)attachmentNodeIDToTypeMap;
+ (void)markSendFakeMsg:(id)a0 contentDict:(id)a1 status:(long long)a2;

@end
