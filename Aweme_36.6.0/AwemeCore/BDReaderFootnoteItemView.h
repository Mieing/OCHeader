@class BDReaderFootnoteAttachment;
@protocol BDReaderFootnoteItemViewDelegate;

@interface BDReaderFootnoteItemView : UIView

@property (retain, nonatomic) BDReaderFootnoteAttachment *attachment;
@property (weak, nonatomic) id<BDReaderFootnoteItemViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)singleTap;

@end
