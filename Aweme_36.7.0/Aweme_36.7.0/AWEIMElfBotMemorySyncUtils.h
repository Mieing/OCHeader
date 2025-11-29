@interface AWEIMElfBotMemorySyncUtils : NSObject

+ (id)zipAndEncryptWithDictionary:(id)a0 key:(id)a1;
+ (id)sendMessageDataFromRawModel:(id)a0;
+ (id)decryptAndUnzipDictionaryWithData:(id)a0 key:(id)a1;
+ (id)briefDataFromRawModel:(id)a0;
+ (long long)timestampWithConversationID:(id)a0 userID:(id)a1;
+ (void)setTimestamp:(long long)a0 conversationID:(id)a1 userID:(id)a2;
+ (id)sendMsgInfoArchivesFromRawModel:(id)a0;
+ (id)sendMsgInfoTopicsFromRawModel:(id)a0;
+ (id)topicBriefFromRawModel:(id)a0;
+ (id)archivesBriefFromRawModel:(id)a0;
+ (id)customArchivesBriefFromRawModel:(id)a0;
+ (id)keyWithConversationID:(id)a0 userID:(id)a1;

@end
