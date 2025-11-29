@class NSString;

@interface AWEDetailNaviBarFullConfigurationImpl : NSObject <AWEDetailNaviBarConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)naviBarBackgroundColor;
- (id)naviBarShareButtonImage;
- (id)naviBarCollectButtonImageForControlState:(unsigned long long)a0;
- (id)naviBarTitleLabelTextColor;
- (id)naviBarSubTitleLabelTextColor;
- (id)naviBarCloseButtonImage;
- (void)configureNaviBarLayout:(id)a0;
- (void)updateNaviBarSubtitleWithCount:(long long)a0 navibar:(id)a1;

@end
