@class WAMainFrameTaskItem, NSString, WAContactGetter, UILabel, UIView, MMWebImageView;

@interface WAPopOverTaskCollectionViewCell : UICollectionViewCell <WAContactMgrExtension>

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) WAMainFrameTaskItem *taskItem;
@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (nonatomic) BOOL isShowAsBackToChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTaskItem:(id)a0;
- (id)getCurrentTaskItem;
- (void)showHighlight:(BOOL)a0;
- (void)initView;
- (void)initData;
- (void)layoutSubviews;
- (void)onContactUpdate:(id)a0;
- (void)onModifyWeAppContact:(id)a0;
- (void).cxx_destruct;

@end
