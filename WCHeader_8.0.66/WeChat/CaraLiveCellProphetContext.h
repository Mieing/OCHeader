@class NSString;

@interface CaraLiveCellProphetContext : NSObject <CaraNativeLiveCellProphetContextBase>

@property (readonly, nonatomic) BOOL isInHomePage;
@property (readonly, nonatomic) BOOL isHomePageLoaded;
@property (readonly, nonatomic) float predictProbThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsInHomePage:(BOOL)a0 isHomePageLoaded:(BOOL)a1 predictProbThreshold:(float)a2;
- (id)zidl;

@end
