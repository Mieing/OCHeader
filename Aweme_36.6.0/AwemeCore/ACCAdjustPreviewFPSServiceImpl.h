@class NSString;
@protocol AEKMegaEditor;

@interface ACCAdjustPreviewFPSServiceImpl : NSObject <ACCAdjustPreviewFPSServiceProtocol>

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (nonatomic) long long defaultFPS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateFPS:(int)a0 forMode:(long long)a1 forScene:(unsigned long long)a2 isPerformanceDynamic:(BOOL)a3 withMegaEditor:(id)a4;
- (BOOL)configProperPreviewFPSAndAdjustForSpecificProjectWithMegaEditor:(id)a0 forScene:(unsigned long long)a1 adjustFPSStrategyProvider:(id)a2;
- (BOOL)clearPreviewFPSAdjustForScene:(unsigned long long)a0 isPerformanceDynamic:(BOOL)a1;
- (BOOL)configCurrentProjectPreviewFPS:(long long)a0 forScene:(unsigned long long)a1;
- (BOOL)configProperPreviewFPSAndAdjustForCurrentProjectForScene:(unsigned long long)a0 adjustFPSStrategyProvider:(id)a1;
- (BOOL)clearPreviewFPSAdjustForScene:(unsigned long long)a0;
- (id)initWithMegaEditor:(id)a0 defaultFPS:(long long)a1;
- (void).cxx_destruct;

@end
