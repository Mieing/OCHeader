@interface AWEGrouponLifeFeedsModuleShowPlugin : AWEGrouponLifeFeedsBasePlugin

@property (nonatomic) BOOL didTrackModuleShowEvent;

- (void)bindStateAndAction;
- (void)componentDidCompleteShow:(id)a0 reason:(unsigned long long)a1;

@end
