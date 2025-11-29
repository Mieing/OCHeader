@class IESLiveKtvSongStruct, NSString, NSArray, IESLiveKRCSong;

@interface IESLiveInteractGameMusicData : NSObject <IESLiveInteractGameMusicDataProtocol>

@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (copy, nonatomic) NSString *midiPath;
@property (copy, nonatomic) NSString *lyricPath;
@property (copy, nonatomic) NSString *originalPath;
@property (copy, nonatomic) NSString *accompanyPath;
@property (copy, nonatomic) NSArray *lyrics;
@property (retain, nonatomic) IESLiveKRCSong *krcSong;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
