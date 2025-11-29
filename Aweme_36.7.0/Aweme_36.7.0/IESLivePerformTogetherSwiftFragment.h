@class HTSLiveCloudCollaborateMember, IESLiveCountTimeLabel;

@interface IESLivePerformTogetherSwiftFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLivePipActions> {
    void /* unknown type, empty encoding */ directorRoomID;
}

@property (nonatomic, retain) HTSLiveCloudCollaborateMember *currentRoomInfo;
@property (nonatomic, retain) HTSLiveCloudCollaborateMember *quitRoomInfo;
@property (nonatomic, retain) HTSLiveCloudCollaborateMember *enterRoomInfo;
@property (nonatomic, retain) IESLiveCountTimeLabel *countDownLabel;
@property (nonatomic) BOOL quitCollaborateRoom;
@property (nonatomic) BOOL enterCollaborateRoom;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)enterCollaborateRoomWithOriginUserID:(id)a0 targetRoomID:(long long)a1 redirectFrom:(long long)a2;
- (long long)shuffleTimeWithLower:(long long)a0 Upper:(long long)a1;
- (void)invalidataTimer;
- (void)startToShowPipWithShowType:(unsigned long long)a0;
- (void)showCountDownLabelWithCountNum:(long long)a0 originUserID:(id)a1 targetRoomID:(long long)a2 enterCollaborateRoom:(BOOL)a3 redirectFrom:(long long)a4;
- (void)setTimeLabelWithCount:(long long)a0 timeFormatBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
