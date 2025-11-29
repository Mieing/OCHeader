@class NSMutableDictionary, IESLiveInteractConfigLayoutEntranceModel;

@interface IESLiveInteractConfigLayoutFetcher : NSObject

@property (retain, nonatomic) IESLiveInteractConfigLayoutEntranceModel *entranceModel;
@property (retain, nonatomic) NSMutableDictionary *fileName2LyoutModel;
@property (nonatomic) BOOL preferLocalLayoutConfigFile;
@property (nonatomic) BOOL enableFetcherOpt;

+ (id)shared;

- (BOOL)useLayoutEngineForUILayout:(int)a0;
- (id)layoutModelWithParams:(id)a0;
- (id)syncLoadEntranceModelDiContext:(id)a0;
- (id)syncLoadLayoutModelWithParams:(id)a0 diContext:(id)a1;
- (id)configFileNameParams:(id)a0;
- (id)configWithFileName:(id)a0 diContext:(id)a1;
- (void)asyncLoadLayoutModelWithParams:(id)a0 completion:(id /* block */)a1 diContext:(id)a2;
- (void).cxx_destruct;

@end
