@class NSString, UIColor;
@protocol WCCardGiftViewDelegate;

@interface WCCardGiftView : MMUIView

@property (weak, nonatomic) id<WCCardGiftViewDelegate> delegate;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) BOOL bIsMemberCard;
@property (retain, nonatomic) UIColor *displayColor;
@property (retain, nonatomic) UIColor *detailColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
