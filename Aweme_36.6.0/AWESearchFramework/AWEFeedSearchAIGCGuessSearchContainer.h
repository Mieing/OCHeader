@class NSArray, NSMutableArray, NSString;
@protocol AWEFeedSearchAIGuessSearchContainerDelegate;

@interface AWEFeedSearchAIGCGuessSearchContainer : UIView <AWEFeedSearchAIGCGuessSearchItemDelegate>

@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<AWEFeedSearchAIGuessSearchContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startShowAnimation;
- (void)updateWithItemModels:(id)a0;
- (void)guessSearchItemViewDidTap:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
