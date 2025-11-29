@class NSString, AWEAwemeModel;

@interface AWEBDALokiManager : BDALokiManager <AWEUserMessage>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ lokiCardStatus;
@property (copy, nonatomic) id /* block */ clickFromOpenAdPageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)initWithAweme:(id)a0 container:(id)a1 lokiDatas:(id)a2;
- (void)setCustomLynxBridges:(id)a0;
- (id)initWithAweme:(id)a0 container:(id)a1;
- (id)createLokiComponentWithContainer:(id)a0 lokiModel:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
