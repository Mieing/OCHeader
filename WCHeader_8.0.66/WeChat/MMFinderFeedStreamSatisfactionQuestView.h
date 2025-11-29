@class NSArray, UILabel, UIView, NSMutableArray;

@interface MMFinderFeedStreamSatisfactionQuestView : UIView

@property (retain, nonatomic) NSArray *quests;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *wordingContainer;
@property (retain, nonatomic) NSMutableArray *wordingViews;
@property (copy, nonatomic) id /* block */ onSelectQuestWording;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithQuests:(id)a0;
- (id)createWordingView:(id)a0;
- (void).cxx_destruct;

@end
