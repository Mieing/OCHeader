@class NSString, UIImageView, AWEAnchorTagLabel, UIView;

@interface AWEInstantAnchorView : UIView <AWEInstantAnchorProtocol>

@property (retain, nonatomic) UIView *separatorMain;
@property (retain, nonatomic) UIView *separatorSub;
@property (retain, nonatomic) UIView *firstLineView;
@property (retain, nonatomic) UIView *secondLineView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) AWEAnchorTagLabel *mainTag1;
@property (retain, nonatomic) AWEAnchorTagLabel *mainTag2;
@property (retain, nonatomic) AWEAnchorTagLabel *subTag1;
@property (retain, nonatomic) AWEAnchorTagLabel *subTag2;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })calculateContentSize:(long long)a0;
- (void)displayTowLinesWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
