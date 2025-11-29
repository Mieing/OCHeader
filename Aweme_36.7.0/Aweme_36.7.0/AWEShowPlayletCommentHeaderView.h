@class NSString, NSDictionary, AWEAwemeModel, UILabel;

@interface AWEShowPlayletCommentHeaderView : UIView <AWEShowPlayletCommentHeaderProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)commonTrackerParams;
- (id)initWithAwemeModel:(id)a0 params:(id)a1;
- (void)p_didClick;
- (void).cxx_destruct;
- (id)labelFont;
- (void)setUpUI;

@end
