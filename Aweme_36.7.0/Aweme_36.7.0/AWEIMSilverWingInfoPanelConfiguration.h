@class NSString, AWEIMUser, NSDictionary;
@protocol IESIMConversationProtocol;

@interface AWEIMSilverWingInfoPanelConfiguration : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *botUid;
@property (copy, nonatomic) NSString *botSecUid;
@property (retain, nonatomic) AWEIMUser *bot;
@property (copy, nonatomic) NSString *creatorUid;
@property (copy, nonatomic) NSString *creatorSecUid;
@property (retain, nonatomic) AWEIMUser *creator;
@property (nonatomic) BOOL needUpdateBot;
@property (nonatomic) unsigned long long enterSource;
@property (nonatomic) BOOL needUpdateCreator;
@property (copy, nonatomic) id /* block */ didShow;
@property (copy, nonatomic) id /* block */ didClose;
@property (copy, nonatomic) NSDictionary *trackerParams;

+ (id)infoSceneConfigWithBot:(id)a0 conversationID:(id)a1 trackerParams:(id)a2;

- (void).cxx_destruct;

@end
