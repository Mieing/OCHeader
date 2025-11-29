@class AWEIMPBChatAIPetMemorySyncMessage, AWEIMElfBotMemorySyncBriefModel, AWEIMElfBotDataModel, AWEIMElfBotMemorySyncDataModel;
@protocol IESIMConversationProtocol;

@interface AWEIMElfBotMemorySyncMessageContext : NSObject

@property (retain, nonatomic) AWEIMElfBotMemorySyncDataModel *syncDataModel;
@property (retain, nonatomic) id<IESIMConversationProtocol> conv;
@property (retain, nonatomic) AWEIMPBChatAIPetMemorySyncMessage *memorySyncMsg;
@property (retain, nonatomic) AWEIMElfBotDataModel *dataModel;
@property (retain, nonatomic) AWEIMElfBotMemorySyncBriefModel *localBriefModel;

- (void).cxx_destruct;

@end
