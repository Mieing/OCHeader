@class MMTableViewInfo;
@protocol RingRecommendSwitchDelegate;

@interface RingToneSettingOptionViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_ringRecommendSwitch;
}

@property (weak, nonatomic) id<RingRecommendSwitchDelegate> delegate;

+ (BOOL)getRingRecommendOption;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)reloadTableData;
- (void)ringVerifyIndividualRecommend:(id)a0;
- (void).cxx_destruct;

@end
