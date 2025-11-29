@class NSString, NSDictionary;

@interface IESGCPEvaluationPublishViewControllerRouterModel : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) double rating;
@property (nonatomic) unsigned long long promteScene;
@property (nonatomic) BOOL isLight;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterWay;
@property (copy, nonatomic) NSDictionary *extraReportDic;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id diContext;
@property (copy, nonatomic) NSDictionary *gameInfo;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *contentId;

- (id)initWithGameId:(id)a0 rating:(double)a1 promoteScene:(unsigned long long)a2 isLight:(BOOL)a3 enterFrom:(id)a4 enterWay:(id)a5 extraReportDic:(id)a6 isAnchor:(BOOL)a7 diContext:(id)a8 complete:(id /* block */)a9;
- (void).cxx_destruct;

@end
