@class AWEIMMessagePropertyPendantAddMoreEmojiView, NSMutableArray, NSArray;
@protocol AWEIMMessagePropertyPendantViewDelegate;

@interface AWEIMMessagePropertyPendantView : UIView

@property (retain, nonatomic) NSMutableArray *viewArray;
@property (retain, nonatomic) AWEIMMessagePropertyPendantAddMoreEmojiView *addMoreEmojiView;
@property (copy, nonatomic) NSArray *viewModelList;
@property (weak, nonatomic) id<AWEIMMessagePropertyPendantViewDelegate> delegate;

- (void)prepareViewsWithViewModelList:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;

@end
