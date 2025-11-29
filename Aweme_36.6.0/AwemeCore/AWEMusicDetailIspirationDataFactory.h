@class NSString, NSMutableDictionary, AWEAwemeModel;

@interface AWEMusicDetailIspirationDataFactory : NSObject

@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSMutableDictionary *awemeListDataControllerManager;
@property (retain, nonatomic) NSMutableDictionary *inspirationModelManager;
@property (retain, nonatomic) AWEAwemeModel *enterModel;

- (void)updateEnterModel:(id)a0;
- (id)lastGroupOriginMaterialsListJSONStringEncoded;
- (void)updateMusicID:(id)a0;
- (void)fetchCombinedInspirationInfosWithCompletion:(id /* block */)a0;
- (id)inspirationAwemeListDataControllerWithType:(unsigned long long)a0;
- (void)setupAwemeListDataControllerManager;
- (void)setupInspirationModelManager;
- (void)weakBindInspirationModelToListDataController;
- (id)orderInspirationModels;
- (void)preFetchInspirationItemCoverImageWithModels:(id)a0;
- (id)inspirationModelClasses;
- (id)inspirationAwemeListDataControllerClasses;
- (id)inspiartionModelWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
