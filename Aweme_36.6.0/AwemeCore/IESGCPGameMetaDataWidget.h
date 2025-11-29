@class NSArray, IESGCPGameMetaDataModel, NSString;

@interface IESGCPGameMetaDataWidget : IESGCPBaseWidget <IESGCPGameMetaDataRouter>

@property (copy, nonatomic) NSArray *gameMetaDataArray;
@property (readonly, nonatomic) IESGCPGameMetaDataModel *currentGameMetaData;
@property (readonly, nonatomic) IESGCPGameMetaDataModel *getGameMetaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetBindService;
- (void)updateMetaModels:(id)a0;
- (id)gameMetaDataModelWithGameId:(id)a0;
- (void)updateIntroduce:(BOOL)a0 gameID:(id)a1;
- (id)trackContextPublicParams;
- (void).cxx_destruct;

@end
