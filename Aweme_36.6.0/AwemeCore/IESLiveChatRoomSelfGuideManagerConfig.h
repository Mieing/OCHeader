@class HTSEventContext;

@interface IESLiveChatRoomSelfGuideManagerConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL guideEnable;

- (void).cxx_destruct;

@end
