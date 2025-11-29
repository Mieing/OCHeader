@class NSString, IESLiveLinkMultiCaster, ByteRTCEngineEx;
@protocol IESLiveLinkReporterProtocol;

@interface IESLiveLinkRTCEngineManager : NSObject

@property (retain, nonatomic) IESLiveLinkMultiCaster *engineObserver;
@property (retain, nonatomic) IESLiveLinkMultiCaster *engineObserverEx;
@property (retain, nonatomic) ByteRTCEngineEx *rtcEngine;
@property (retain, nonatomic) IESLiveLinkMultiCaster *observer;
@property (copy, nonatomic) NSString *appID;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;

+ (id)shared;

- (void)updateEngineWithRTCExtInfo:(id)a0 rtcVideoParam:(id)a1;
- (id)createEngine:(id)a0;
- (void)addEngineObserverEx:(id)a0;
- (void)notifyEngineCreated:(BOOL)a0 appID:(id)a1;
- (void)notifyEngineWillDestroy:(id)a0;
- (void)notifyEngineDidDestroy:(id)a0;
- (void)removeEngineObserverEx:(id)a0;
- (void).cxx_destruct;
- (void)removeEngineObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (id)engine;
- (void)destroyEngine;
- (void)addEngineObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
