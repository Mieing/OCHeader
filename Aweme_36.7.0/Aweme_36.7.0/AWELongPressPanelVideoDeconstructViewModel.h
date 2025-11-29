@class AWESearchVideoDeconstructEntity;

@interface AWELongPressPanelVideoDeconstructViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) AWESearchVideoDeconstructEntity *firstEntity;

+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)videoLongPressChannelBlackList;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
