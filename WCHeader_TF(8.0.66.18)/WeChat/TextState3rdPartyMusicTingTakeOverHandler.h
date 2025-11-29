@class TextStateListenMediaView, MMMusicVideoStatusOpenParams;

@interface TextState3rdPartyMusicTingTakeOverHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) MMMusicVideoStatusOpenParams *params;
@property (retain, nonatomic) TextStateListenMediaView *mediaView;

+ (id)openParamsFormMusicBuffer:(id)a0;

- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (BOOL)useCoverForContent;
- (id)convertSongInfoToMMMusicInfo:(id)a0;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)supportCustomMedia;
- (id)mediaContentView;
- (id)mediaCoverView;
- (id)coverUrlString;
- (id)musicInfo;
- (id)getMusicInfo;
- (id)reportActivityId;
- (void).cxx_destruct;

@end
