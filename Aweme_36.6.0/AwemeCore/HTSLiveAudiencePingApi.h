@class NSNumber;
@protocol HTSLiveAudiencePingApiDelegate;

@interface HTSLiveAudiencePingApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL closed;
@property (weak, nonatomic) id<HTSLiveAudiencePingApiDelegate> delegate;
@property (nonatomic) unsigned long long audiencePingInterval;

- (id)initWithRoomID:(id)a0;
- (void)requestWithOnlyStatus:(BOOL)a0;
- (void)startAudiencePingImmediately:(BOOL)a0;
- (void)stopAudiencePing;
- (void)checkLiveRoomAlive;
- (void).cxx_destruct;

@end
