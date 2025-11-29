@class NSString, AWEIMMessage, NSDictionary;
@protocol IESIMConversationProtocol, BDXBridgeContainerProtocol;

@interface AWEIMOpenPetElfAchieveOrInvitePanelConfig : NSObject

@property (copy, nonatomic) NSString *anchorKey;
@property (copy, nonatomic) NSString *pageScene;
@property (retain, nonatomic) id<BDXBridgeContainerProtocol> currentPopupContainer;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEIMMessage *message;
@property (copy, nonatomic) NSDictionary *extraData;

- (void).cxx_destruct;

@end
