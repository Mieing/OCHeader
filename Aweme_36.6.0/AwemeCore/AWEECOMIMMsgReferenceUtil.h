@interface AWEECOMIMMsgReferenceUtil : NSObject

+ (void)storeReferenceTCCconfigWithPigeonBizType:(id)a0;
+ (id)generateLastStoreKeyWithPigeonBizType:(id)a0;
+ (id)generateMsgReferenceModelWithBizConversationID:(id)a0 pigeonBizType:(id)a1;
+ (BOOL)enableReferenceWithPigeonBizType:(id)a0;
+ (id)generateReferenceInfoWithReferenceModel:(id)a0;
+ (void)storeReferenceWithMsgModel:(id)a0 bizConversationID:(id)a1;
+ (void)clearReferenceWithBizConversationID:(id)a0;
+ (BOOL)hasReferenceInfoWithBizConversationID:(id)a0 pigeonBizType:(id)a1;
+ (id)generateReferenceKeyWithBizConversationID:(id)a0;
+ (id)generateReferenceModelWithReferenceInfo:(id)a0 isShark:(BOOL)a1 pigeonBizType:(id)a2;
+ (id)generateCurrentStoreKeyWithPigeonBizType:(id)a0;

@end
