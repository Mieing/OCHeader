@class NSString;

@interface CaraLiveReddotProphetContext : NSObject <CaraNativeLiveReddotProphetContextBase>

@property (readonly, nonatomic) NSString *anchor;
@property (readonly, nonatomic) float reddotScore;
@property (readonly, nonatomic) BOOL isReddotScoreValid;
@property (readonly, nonatomic) int preloadControlFlag;
@property (readonly, nonatomic) int enterAction;
@property (readonly, nonatomic) BOOL isHomePageLoaded;
@property (readonly, nonatomic) float predictProbThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnchor:(id)a0 reddotScore:(float)a1 isReddotScoreValid:(BOOL)a2 preloadControlFlag:(int)a3 enterAction:(int)a4 isHomePageLoaded:(BOOL)a5 predictProbThreshold:(float)a6;
- (id)zidl;
- (void).cxx_destruct;

@end
