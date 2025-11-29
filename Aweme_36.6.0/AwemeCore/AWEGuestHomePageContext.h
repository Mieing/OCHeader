@interface AWEGuestHomePageContext : AWEPageContext

@property (readonly, nonatomic) double containerStickOffsetY;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } containerContentOffset;
@property (readonly, nonatomic) double containerHeaderSectionHeight;

- (double)containerHeaderSectionHeight;

@end
