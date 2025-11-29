@class NSString;

@interface AWEChapterPanelTipView : UIView

@property (retain, nonatomic) NSString *tipText;
@property (retain, nonatomic) NSString *tailText;
@property (retain, nonatomic) NSString *iconName;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)configUI;
- (id)initWithTipText:(id)a0 tailText:(id)a1 iconName:(id)a2;
- (void).cxx_destruct;

@end
