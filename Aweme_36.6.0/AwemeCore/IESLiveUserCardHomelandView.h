@class NSMutableDictionary, NSString, IESLiveUserCardStore, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveUserCardHomelandView : UIView <IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (retain, nonatomic) NSMutableDictionary *homesteadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)homesteadViewHeight:(id)a0;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setupUI;

@end
