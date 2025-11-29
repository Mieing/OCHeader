@class NSString, AWEVideoPublishViewModel;
@protocol AWEEditKit, AEKMegaEditor, IESServiceProvider, ACCComponentController;

@interface ACCFeatureComponent : NSObject <ACCFeatureComponent, ACCServiceBindable>

@property (readonly, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, weak, nonatomic) id<ACCComponentController> controller;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic, getter=isMounted) BOOL mounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aek_megaEditor;
- (void)setAek_MegaEditor:(id)a0;
- (id)aek_editKit;
- (void)setAek_editKit:(id)a0;
- (void)bindServices:(id)a0;
- (void)setFeatureConfig:(id)a0;
- (unsigned long long)currentMemoryDangerLevel;
- (BOOL)isMemoryInDanger;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
