@class NSString, IESLiveUserCardStore, UIView, IESLiveResidentGuestBanner;
@protocol IESHYContainerProtocol;

@interface IESLiveUserCardResidentGuestHybridView : UIView <IESLiveUserCardHonorWallViewProtocol>

@property (retain, nonatomic) IESLiveResidentGuestBanner *residentGuestData;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getResidentGuestBannerHeight:(id)a0;
+ (unsigned long long)getResidentGuestBannerViewType:(id)a0;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setupUI;

@end
