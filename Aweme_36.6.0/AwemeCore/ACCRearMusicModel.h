@protocol ACCMusicModelProtocol;

@interface ACCRearMusicModel : NSObject

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) unsigned long long defaultRearApplyMusicType;

- (BOOL)isOffLine;
- (BOOL)isEmptyModel;
- (id)initWithMusic:(id)a0;
- (id)initWithMusic:(id)a0 originSoundModel:(id)a1 currentType:(unsigned long long)a2;
- (id)rearApplyMusic;
- (void)setupRearApplyMusicModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
