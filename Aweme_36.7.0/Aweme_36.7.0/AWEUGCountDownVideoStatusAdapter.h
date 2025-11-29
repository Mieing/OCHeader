@class NSString, AWEAwemeModel;
@protocol AWEUGCountDownVideoStatusProtocol;

@interface AWEUGCountDownVideoStatusAdapter : NSObject <AWEUGFeedVideoStatusProtocol>

@property (nonatomic) unsigned long long currentPlayStatus;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (weak, nonatomic) id<AWEUGCountDownVideoStatusProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)pauseTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)startTaskTimerWithAweme:(id)a0 playStatus:(unsigned long long)a1 scene:(id)a2;
- (void)setVideoStatusDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
