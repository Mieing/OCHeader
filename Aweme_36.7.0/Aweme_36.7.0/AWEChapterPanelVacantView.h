@class NSString;

@interface AWEChapterPanelVacantView : UIView

@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) id /* block */ clickAction;

- (void)configSubViews;
- (id)initWithDetailTitle:(id)a0 buttonText:(id)a1;
- (void).cxx_destruct;

@end
