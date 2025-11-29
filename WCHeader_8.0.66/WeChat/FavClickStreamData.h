@class NSString;

@interface FavClickStreamData : NSObject

@property (nonatomic) BOOL bResume;
@property (retain, nonatomic) NSString *className;
@property (nonatomic) unsigned int enterPageTime;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long enterPageTimeInMs;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int enterPageTimeInS;

- (id)init;
- (void)onViewControllerDidAppear:(id)a0;
- (void)onViewControllerDidDisappear;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)dealloc;
- (id)jsonString;
- (void).cxx_destruct;

@end
