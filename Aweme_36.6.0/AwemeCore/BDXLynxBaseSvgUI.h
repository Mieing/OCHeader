@class NSString, LynxThreadSafeDictionary;

@interface BDXLynxBaseSvgUI : LynxUI

@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *content;
@property (retain) LynxThreadSafeDictionary *bdImageHolder;

+ (id)__lynx_prop_config__890;
+ (id)__lynx_prop_config__991;

- (void)layoutDidFinished;
- (void)setContent:(id)a0 requestReset:(BOOL)a1;
- (void)updateLayoutIfNeed;
- (void)setSrc:(id)a0 requestReset:(BOOL)a1;
- (id)loadImageFromHref:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)processSvgData:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)applyImage:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
