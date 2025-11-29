@class AWEIMElfBotMemoryRawDataModel, NSString, NSDictionary;

@interface AWEIMElfBotDataModel : NSObject

@property (retain, nonatomic) AWEIMElfBotMemoryRawDataModel *rawModel;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *convShortID;
@property (nonatomic) long long sentinel;
@property (copy) NSDictionary *sendMsgDictionary;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long status;

+ (id)diskCacheWithConvShortID:(id)a0;
+ (id)pathForUserID:(id)a0 conversationShortID:(id)a1;
+ (id)sharedAES256Key;
+ (id)pathForLoginUserWithConversationShortID:(id)a0;
+ (id)directoryForUserID:(id)a0;
+ (id)sharedQueue;

- (void)removeDiskCache;
- (id)initWithRawData:(id)a0 convShortID:(id)a1 conversationID:(id)a2;
- (id)sendMsgData;
- (void)cacheToDiskWithTimestamp:(long long)a0 completion:(id /* block */)a1;
- (id)p_customArchive;
- (void)cacheToDiskWithCompletion:(id /* block */)a0;
- (id)topicDictionary;
- (long long)minDeleteVersion;
- (id)currentUserCustomArchive;
- (id)syncDataDictionary;
- (id)briefModel;
- (id)rawDataDictionary;
- (void)updateTopic:(id)a0;
- (void)updateArchive:(id)a0;
- (void)mergeCustomArchives:(id)a0;
- (void)updateCurrentUserCustomArchive:(id)a0;
- (BOOL)mergeDeleteRecordResponse:(id)a0;
- (long long)topicDeleteVersion;
- (void)deleteAllTopicsWithDeleteVersion:(long long)a0;
- (void)deleteTopicWithTopicID:(id)a0 deleteVersion:(long long)a1;
- (void).cxx_destruct;
- (id)archiveDictionary;
- (long long)updateTimestamp;
- (id)allTopics;

@end
