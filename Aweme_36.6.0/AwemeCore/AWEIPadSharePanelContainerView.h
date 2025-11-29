@class NSString;

@interface AWEIPadSharePanelContainerView : UIView <AWEPadBubbleViewProtocol>

@property (nonatomic) double shareButtonTop;
@property (nonatomic) struct CGSize { double width; double height; } shareButtionSize;
@property (nonatomic) double marginBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createShap;
- (void)setHidden:(BOOL)a0;
- (void)layoutSubviews;

@end
