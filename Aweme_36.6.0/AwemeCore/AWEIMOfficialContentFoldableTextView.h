@class UILabel, AWEOfficialContentLabel, AWENoticeTextStructModel;

@interface AWEIMOfficialContentFoldableTextView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEOfficialContentLabel *detailLabel;
@property (retain, nonatomic) AWENoticeTextStructModel *textModel;
@property (copy, nonatomic) id /* block */ unFoldActionBlock;

- (double)p_calculateYYlabelWidth;
- (void)setModel:(id)a0 textModel:(id)a1 maxTitleWidth:(double)a2 isUnfold:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
