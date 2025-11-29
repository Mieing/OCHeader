@class APCDTOMusic;

@interface ACCEditorMusicConfigAssembler : NSObject

@property (retain, nonatomic) APCDTOMusic *config;

+ (void)fetchMusicModelWithMusicConfig:(id)a0 completion:(id /* block */)a1;

- (void)prepareOnCompletion:(id /* block */)a0;
- (void)autoConfigMusicWithHotList;
- (void)specifyMusicWithMusicId:(id)a0;
- (void)specifyMusicWithMusic:(id)a0;
- (void).cxx_destruct;

@end
