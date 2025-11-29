@class NSArray, NSMutableArray, UIView;
@protocol ACCTextEditToolOptionView;

@interface ACCTextTemplateSwitcher : UIView

@property (retain, nonatomic) NSMutableArray *switchViewList;
@property (weak, nonatomic) id<ACCTextEditToolOptionView> currentSelectedSwitchView;
@property (retain, nonatomic) NSArray *optionList;
@property (retain, nonatomic) UIView *indicatorView;
@property (copy, nonatomic) id /* block */ userSelectCallback;
@property (copy, nonatomic) id /* block */ didSelectedToolCallback;
@property (copy, nonatomic) id /* block */ didDeSelectedToolCallback;

- (void)selectToolOption:(unsigned long long)a0;
- (id)initWithOptionList:(id)a0;
- (void)scrollIndicatorToView:(id)a0;
- (void)unSelectAnyTool;
- (void).cxx_destruct;
- (void)selectIndex:(unsigned long long)a0;

@end
