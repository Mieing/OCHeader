@class YYLabel, AWESearchVideoCardBottomDescModel;

@interface AWESearchVideoCardBottomDescView : UIView

@property (retain, nonatomic) YYLabel *contentView;
@property (retain, nonatomic) AWESearchVideoCardBottomDescModel *model;

+ (id)attributedStringWithModel:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
