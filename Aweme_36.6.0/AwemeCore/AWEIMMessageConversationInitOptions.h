@class NSString;
@protocol IESIMConversationProtocol;

@interface AWEIMMessageConversationInitOptions : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (nonatomic) BOOL isFromMessageBaseViewController;
@property (retain, nonatomic) NSString *peerSecUserID;
@property (nonatomic) BOOL isAuthorService;
@property (nonatomic) BOOL shouldShowEngageGroupOwnerLocalGIF;
@property (nonatomic) BOOL showedActiveGroupMembers;
@property (nonatomic) unsigned long long participantInitType;

- (void).cxx_destruct;

@end
