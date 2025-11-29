@class AWESearchArticleTimeTrackModel, NSDictionary, AWEAwemeModel, AWESearchArticleRouteModel, UIViewController;

@interface AWESearchArticleDetailPageContext : AWEPageContext

@property (nonatomic) unsigned long long contentStatus;
@property (nonatomic) unsigned long long clickPosition;
@property (copy, nonatomic) NSDictionary *commentEditText;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWESearchArticleRouteModel *routeModel;
@property (retain, nonatomic) AWESearchArticleTimeTrackModel *timeTrack;

- (id)commonTrackParams;
- (void)parseParams:(id)a0;
- (void)updateClickPosition:(unsigned long long)a0;
- (void)updateContentStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
