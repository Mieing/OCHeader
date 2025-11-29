@class NSString;

@interface AWEDCFeedDislikePanelCell : AWEDoubleColumnDislikeCell <AWEDoubleColumnDislikeCellProtocol>

@property (nonatomic) unsigned long long themeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)configWithTitle:(id)a0;
- (void)configWithTitle:(id)a0 withImage:(id)a1;
- (void)updateBackgroundColor;

@end
