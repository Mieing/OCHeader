@class UIImageView, UILabel, AWEFeedSearchAIGCGuessSearchItemModel, UITapGestureRecognizer;
@protocol AWEFeedSearchAIGCGuessSearchItemDelegate;

@interface AWEFeedSearchAIGCGuessSearchItem : UIView

@property (retain, nonatomic) UILabel *queryTextLabel;
@property (retain, nonatomic) UIImageView *queryImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEFeedSearchAIGCGuessSearchItemModel *itemModel;
@property (weak, nonatomic) id<AWEFeedSearchAIGCGuessSearchItemDelegate> delegate;

+ (struct CGSize { double x0; double x1; })calculateSizeWithModel:(id)a0 maxWidth:(double)a1;

- (void)setupGestureRecognizer;
- (void)updateWithItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)setupUI;
- (void)handleTapGesture:(id)a0;

@end
