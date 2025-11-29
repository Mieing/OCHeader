@class UILabel, AWENoticeTextStructModel;

@interface AWEIMOfficialContentTextView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) AWENoticeTextStructModel *textModel;

- (void)setTextModel:(id)a0 maxTitleWidth:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
