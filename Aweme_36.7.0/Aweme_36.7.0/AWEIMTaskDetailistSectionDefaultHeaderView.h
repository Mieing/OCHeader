@class AWEIMTaskDetailistSectionDefaultHeaderModel, NSString, UIImageView, UILabel, UIButton;
@protocol AWEIMTaskDetailistSectionHeaderFooterViewDelegate;

@interface AWEIMTaskDetailistSectionDefaultHeaderView : UITableViewHeaderFooterView <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) AWEIMTaskDetailistSectionDefaultHeaderModel *model;
@property (weak, nonatomic) id<AWEIMTaskDetailistSectionHeaderFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)addSubviews;
- (void)addContrans;
- (void)onDetailButtonClick;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
