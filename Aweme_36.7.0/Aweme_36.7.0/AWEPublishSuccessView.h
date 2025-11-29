@class UILabel, NSString, AWEAwemeModel;

@interface AWEPublishSuccessView : UIView

@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ bindButtonClicked;
@property (readonly, nonatomic) BOOL showSendIMLabel;
@property (copy, nonatomic) NSString *title;

- (id)syncLabel;
- (id)syncIconView;
- (id)initWithAweme:(id)a0 type:(unsigned long long)a1 showSendIMLabel:(BOOL)a2;
- (void)p_bindButtonClicked;
- (id)createSubtitleLabel;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
