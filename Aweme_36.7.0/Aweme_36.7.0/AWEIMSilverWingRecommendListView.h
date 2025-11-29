@class NSMutableArray;

@interface AWEIMSilverWingRecommendListView : UIStackView

@property (retain, nonatomic) NSMutableArray *listViewArray;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) id /* block */ didSelectedLisBlock;

- (void)p_didPressedEmoticonViewWithGesture:(id)a0;
- (long long)hitWhichListViewWithGesture:(id)a0;
- (void)renderViewWithModels:(id)a0;
- (void)updateViewWithBackgroundImage:(BOOL)a0 isBright:(BOOL)a1 customBackgroundColor:(id)a2 customTextColor:(id)a3 customBorderColor:(id)a4;
- (void)removeCurrentRenderedList;
- (id)createTextViewWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaxCount:(long long)a0;

@end
