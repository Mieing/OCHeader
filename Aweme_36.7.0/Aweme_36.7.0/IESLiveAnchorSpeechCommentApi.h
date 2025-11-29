@protocol IESLiveRoomService;

@interface IESLiveAnchorSpeechCommentApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)setAnchorAudioSettingWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)verifyAnchorAudioWithResult:(id)a0 keyword:(id)a1 historyTextList:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
