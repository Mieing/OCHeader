@class NSString, NSMutableArray, NSHashTable;
@protocol IESLivePSComponentInteractAreaDelegate;

@interface IESLivePSComponentInteractArea : NSObject <IESLivePSComponentInteractAreaProvider>

@property (nonatomic) long long maxShowCount;
@property (retain, nonatomic) NSMutableArray *showingModelArray;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (weak, nonatomic) id<IESLivePSComponentInteractAreaDelegate> delegate;
@property (copy, nonatomic) NSString *areaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)showComponent:(id)a0;
- (void)addPSComponentInteractAreaChangeSubscriber:(id)a0 areaType:(id)a1;
- (void)showComponentsChanged;
- (void)pushShowModel:(id)a0;
- (void)handleComponentConfigModel:(id)a0;
- (void)viewDisappear:(id)a0;
- (void).cxx_destruct;
- (void)removeComponent:(id)a0;

@end
