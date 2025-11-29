@class IESLiveKtvSongStruct;

@interface WantToListenSongListResponse_SongListItem : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) BOOL hasSong;
@property (nonatomic) long long wantToListenCount;

+ (id)descriptor;

@end
