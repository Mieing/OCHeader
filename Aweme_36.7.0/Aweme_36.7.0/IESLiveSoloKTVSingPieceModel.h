@class IESLiveKtvSongStruct, IESSoloKTVDraftMainModel, NSDictionary, IESLiveSoloKTVApi;

@interface IESLiveSoloKTVSingPieceModel : NSObject

@property (retain, nonatomic) IESLiveSoloKTVApi *api;
@property (nonatomic) int source;
@property (retain, nonatomic) IESLiveKtvSongStruct *currentSong;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (nonatomic) long long sessionId;
@property (nonatomic) double timeStart;
@property (nonatomic) double timeEnd;
@property (retain, nonatomic) NSDictionary *trackParam;

- (void)requestStartKTV:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
