@class AWEIMMessageConversation;

@interface AWEIMGroupFunctionsDesignContext : NSObject

@property (nonatomic) unsigned long long sceneType;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) unsigned long long aweim_naviBarType;
@property (nonatomic) BOOL onLive;

- (void).cxx_destruct;

@end
