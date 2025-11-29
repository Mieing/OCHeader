@class UIColor, UIFont;
@protocol WCPuzzleImageViewDelegate, WCImageViewDelegate;

@interface WCThumbViewParams : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ImageView_frame;
@property (nonatomic) BOOL ImageView_displaysPuzzleImageViews;
@property (weak, nonatomic) id<WCImageViewDelegate> WCImageView_delegate;
@property (weak, nonatomic) id<WCPuzzleImageViewDelegate> WCPuzzleImageView_delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } TextView_frame;
@property (retain, nonatomic) UIColor *TextView_backgroundColor;
@property (retain, nonatomic) UIFont *TextView_font;
@property (retain, nonatomic) UIColor *TextView_textColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } TextView_textPadding;
@property (nonatomic) long long TextView_textVerticalAlignment;
@property (nonatomic) long long puzzleImageViewLayoutStyle;

- (id)init;
- (void).cxx_destruct;

@end
