@class CMessageWrap, MMUIButton;

@interface MMActionSheetMsgPreviewRowView : UIView

@property (retain, nonatomic) MMUIButton *rightButton;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (copy, nonatomic) id /* block */ handler;

+ (id)rowViewWithMsgWrap:(id)a0 handler:(id /* block */)a1;

- (id)initWithMsgWrap:(id)a0;
- (void)layoutSubviews;
- (void)initViews;
- (void).cxx_destruct;

@end
