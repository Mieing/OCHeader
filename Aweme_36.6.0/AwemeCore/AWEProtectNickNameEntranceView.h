@class NSString, AWEProfileFrequencyInfoModel, UILabel, UIView;

@interface AWEProtectNickNameEntranceView : UIView <AWEUserNickNameProtectViewControllerProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *protectNickNameLabel;
@property (retain, nonatomic) UILabel *goEditEntrance;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) AWEProfileFrequencyInfoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithFrequencyInfo:(id)a0;
- (void)goEditEntranceClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)popViewController;

@end
