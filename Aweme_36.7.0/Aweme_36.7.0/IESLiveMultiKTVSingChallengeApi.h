@class NSNumber;
@protocol IESLiveKTVFullLinkMonitor;

@interface IESLiveMultiKTVSingChallengeApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> fullMonitor;

- (id)initWithRoomID:(id)a0;
- (void)openChallengeWithChallengeType:(int)a0 target:(unsigned long long)a1 configType:(int)a2 completion:(id /* block */)a3;
- (void)fetchStageType:(id /* block */)a0;
- (void)noticeStart:(id /* block */)a0;
- (void)requestSingChallengeConfigWithCompletion:(id /* block */)a0;
- (void)closeChallengeWithChallengeType:(int)a0 completion:(id /* block */)a1;
- (void)reportMidiScore:(unsigned long long)a0;
- (void)handlerResponse:(id)a0 request:(id)a1 error:(id)a2 startTime:(double)a3 event:(id)a4 completion:(id /* block */)a5;
- (void)noticeHonorList:(id /* block */)a0;
- (void)updateSwitch:(unsigned long long)a0 configType:(int)a1 duration:(long long)a2 target:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
