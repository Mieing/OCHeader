@class IESLiveMyLiveTabCellViewModel, NSString, UIView;
@protocol IESLiveAnnouncementXApi, IESLiveDynamicService, IESLiveMyLiveTabCellDelegate;

@interface IESLiveMyLiveTabCell : UITableViewCell <IESLiveDynamicViewDelegate>

@property (retain, nonatomic) UIView *dynamicView;
@property (retain, nonatomic) IESLiveMyLiveTabCellViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveAnnouncementXApi> appointApi;
@property (retain, nonatomic) id<IESLiveDynamicService> dynamicService;
@property (weak, nonatomic) id<IESLiveMyLiveTabCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerSliceXEvent:(id)a0;
- (void)updateFollowStatus:(long long)a0 error:(id)a1 withViewModel:(id)a2;
- (void)updateDataSourceWithData:(id)a0 viewModel:(id)a1;
- (void)updateCellWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
