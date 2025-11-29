@class NSMutableDictionary, NSObject;
@protocol IESLiveFullLinkMonitor, OS_dispatch_queue;

@interface IESLiveSoloKTVByteAudioMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *commonParams;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)getDictionaryFromString:(id)a0;

- (void)updateCommonParams:(long long)a0 currentScene:(id)a1;
- (void)setCommonParamsValue:(id)a0 forKey:(id)a1;
- (void)reportWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
