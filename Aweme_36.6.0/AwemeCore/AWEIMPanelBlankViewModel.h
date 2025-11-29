@interface AWEIMPanelBlankViewModel : AWEIMPanelViewModel

@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;

+ (id)defaultTopViewModel;
+ (id)bottomInsetViewModel;

- (id)init;

@end
