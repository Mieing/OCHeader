@class NSString, LunaMedia;

@interface AWEMusicDspMusicItemModel : NSObject

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) LunaMedia *lunaMedia;

- (id)initWithMusicId:(id)a0 videoId:(id)a1;
- (id)initWithMusicId:(id)a0 videoId:(id)a1 songId:(id)a2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
