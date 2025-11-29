@class IESLiveLinkRTCSignalUser;

@interface IESLiveLinkInteractSessionConfig : NSObject

@property (nonatomic) long long mode;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *roomOwner;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *currentUser;
@property (nonatomic) BOOL sessionNeedRender;
@property (nonatomic) BOOL retainLastVideoFrame;
@property (nonatomic) BOOL preJoinChannel;
@property (nonatomic) BOOL fmNeedRender;

- (void).cxx_destruct;

@end
