@class NSString, AWEIMElfBotDataModel, AWEIMElfBotMemorySyncMessageContext;

@interface AWEIMElfBotMemorySyncRequestContext : NSObject

@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) AWEIMElfBotDataModel *dataModel;
@property (nonatomic) unsigned long long userOptions;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *peerUserID;
@property (retain, nonatomic) AWEIMElfBotMemorySyncMessageContext *syncContext;

- (void).cxx_destruct;

@end
