@class NSString, NSMutableArray, UIView;
@protocol IESHYContainerProtocol, IESLiveBigGiftComboActivityViewDelegate;

@interface IESLiveBigGiftComboActivityViewModel : NSObject <IESHYHybridViewLifecycleProtocol>

@property (copy, nonatomic) NSString *currentRecivierUid;
@property (copy, nonatomic) NSString *comboId;
@property (copy, nonatomic) NSString *pluginInfo;
@property (copy, nonatomic) NSString *activityData;
@property (weak, nonatomic) id<IESLiveBigGiftComboActivityViewDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *clickTime;
@property (retain, nonatomic) NSString *guideType;
@property (copy, nonatomic) id /* block */ messageUpdateBlock;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)pageInitialDataWithMsg:(id)a0;
- (void)updateWithMsg:(id)a0;
- (void)loadHybridContainerWithMsg:(id)a0;
- (void)sendEventWithMsg:(id)a0;
- (int)getComboStatus;
- (id)initWithComboId:(id)a0 pluginInfo:(id)a1 activityData:(id)a2 delegate:(id)a3;
- (void)impact;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;

@end
