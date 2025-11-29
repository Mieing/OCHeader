@protocol IESLiveRoomService;

@interface HTSLiveCommentApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)episodeInfoString;
- (id)getAdParams;
- (id)channelCommentTypeWithRequestModel:(id)a0;
- (void)fetchCommentInventionsWithSentence:(id)a0 preSentence:(id)a1 roomID:(id)a2 completion:(id /* block */)a3;
- (void)sendCommentWithRequestModel:(id)a0 callBack:(id /* block */)a1 diContext:(id)a2;
- (void)sendChannelCommentWithRequestModel:(id)a0 channelID:(id)a1 callBack:(id /* block */)a2;
- (void)sendWhisperCommentWithRequestModel:(id)a0 callback:(id /* block */)a1;
- (void)sendSquareCommentWithRequestModel:(id)a0 callback:(id /* block */)a1;
- (void)sendBarrage:(id)a0 finished:(id /* block */)a1;
- (void)uploadAudioWithPath:(id)a0 duration:(long long)a1 flowTime:(long long)a2 completion:(id /* block */)a3;
- (void)uploadAnchorSpeechAudioWithPath:(id)a0 duration:(long long)a1 atUserContent:(id)a2 content:(id)a3 completion:(id /* block */)a4;
- (void)setAudioChat:(unsigned long long)a0 finished:(id /* block */)a1;
- (void)fetchAudioChatCodeFinished:(id /* block */)a0;
- (void)sendPrivilegeDanmaku:(id)a0 style:(int)a1 completion:(id /* block */)a2;
- (void)fetchSilenceBlockInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
