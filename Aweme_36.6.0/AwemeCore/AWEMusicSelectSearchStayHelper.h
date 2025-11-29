@class NSString;

@interface AWEMusicSelectSearchStayHelper : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) double beginTime;
@property (nonatomic) double stayTime;
@property (nonatomic) BOOL didEnterBackground;

- (id)initWithEnterFrom:(id)a0;
- (void)beginDisplaySearch:(id)a0 requestId:(id)a1;
- (void)endDisplay;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;

@end
