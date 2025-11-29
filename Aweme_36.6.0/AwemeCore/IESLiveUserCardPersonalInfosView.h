@class IESLiveUserCardStore;

@interface IESLiveUserCardPersonalInfosView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;

- (void)didSetAttachingDIContext;
- (id)getShowTextWithNumber:(long long)a0;
- (id)formatDouble:(double)a0;
- (void)subscribeLabelDidTapped:(id)a0;
- (void)pushSubscribeLabelDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)setup;

@end
