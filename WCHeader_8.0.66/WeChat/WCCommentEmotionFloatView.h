@class SnsEmojiInfoObj, WCDataItem, WCUserComment;

@interface WCCommentEmotionFloatView : UIButton

@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCUserComment *userComment;

+ (double)getWidth;
+ (double)getHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAbove:(BOOL)a1 arrowX:(double)a2 emotion:(id)a3;
- (id)getSnsEmojiInfoObj;
- (void).cxx_destruct;

@end
