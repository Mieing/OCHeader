@class AWEHPSideBarReopenConfig;

@interface AWEHPOpenSideBarParams : AWEHPOperateSideBarBaseParams

@property (nonatomic) long long openType;
@property (retain, nonatomic) AWEHPSideBarReopenConfig *reopenConfig;

- (void).cxx_destruct;

@end
