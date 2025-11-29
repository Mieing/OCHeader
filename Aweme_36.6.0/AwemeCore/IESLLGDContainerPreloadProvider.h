@class NSString;

@interface IESLLGDContainerPreloadProvider : NSObject <IESLLGDContainerPreLoadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadWithBizCode:(id)a0;
- (void)reportTrackWithContext:(id)a0;
- (void)setBizData:(id)a0 forKey:(id)a1;
- (id)bizDataForKey:(id)a0;
- (void)preload;
- (void)updateWithContext:(id)a0;

@end
