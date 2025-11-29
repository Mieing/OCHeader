@class NSString;
@protocol IESIMConversationProtocol;

@interface AWEIMElfBotMemoryUpdateContext : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (nonatomic) unsigned long long createType;
@property (copy, nonatomic) NSString *messageRange;
@property (nonatomic) BOOL needGenTopic;
@property (nonatomic) BOOL needGenArchive;
@property (copy, nonatomic) id /* block */ blockBeforeAsync;
@property (copy, nonatomic) id /* block */ blockInAsync;
@property (copy, nonatomic) id /* block */ blockInMain;

- (void).cxx_destruct;

@end
