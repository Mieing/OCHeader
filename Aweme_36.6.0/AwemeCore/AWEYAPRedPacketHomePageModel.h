@class NSString, AWEIMUser, NSDictionary;
@protocol AWEIMMessageConversationProtocol;

@interface AWEYAPRedPacketHomePageModel : NSObject

@property (retain, nonatomic) id<AWEIMMessageConversationProtocol> conversation;
@property (nonatomic) long long redpacketSource;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *actionId;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) AWEIMUser *toUser;
@property (copy, nonatomic) NSString *teaSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *passthroughParam;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ routerBlock;

- (void).cxx_destruct;

@end
