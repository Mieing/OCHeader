@class UIImageView, MMUIView, UIView;

@interface MJTrimHandle : UIView

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *handleView;
@property (retain, nonatomic) UIImageView *handleIconView;
@property (retain, nonatomic) MMUIView *snapIndicatorLine;
@property (retain, nonatomic) MMUIView *snapIndicatorDot;

+ (id)trimHandleWithStyle:(unsigned long long)a0;

- (id)initWithStyle:(unsigned long long)a0;
- (void)setupViews;
- (void)layoutViews;
- (void).cxx_destruct;

@end
