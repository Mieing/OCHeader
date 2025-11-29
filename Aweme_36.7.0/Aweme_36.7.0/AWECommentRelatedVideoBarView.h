@class NSArray, UIImageView, NSString, UILabel;

@interface AWECommentRelatedVideoBarView : UIView <AWECommentListCustomExtraViewProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSArray *iconURLList;
@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) id /* block */ linkClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customViewHeightInCommentListHeader;
- (void)initView;
- (void)configIconView;
- (void)initGesutures;
- (void)tapTitleAction;
- (void).cxx_destruct;
- (id)init;
- (void)updateColors;
- (void)updateWithModel:(id)a0;

@end
