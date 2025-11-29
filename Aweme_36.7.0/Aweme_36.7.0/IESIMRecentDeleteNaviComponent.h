@class UIButton, NSString;
@protocol IESIMRecentDeleteDataInterface;

@interface IESIMRecentDeleteNaviComponent : AWEIMComponentBase <IESIMRecentDeleteNaviInterface>

@property (retain, nonatomic) UIButton *selectAllButton;
@property (weak, nonatomic) id<IESIMRecentDeleteDataInterface> dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)naviBarView;
- (void)componentDidMounted:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)setupBind;
- (void)selectAllButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)createUI;

@end
