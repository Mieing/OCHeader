@class NSString, NSNumber;

@interface AnnieSetContainerPageUIModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (copy, nonatomic) NSString *statusBarBgColor;
@property (nonatomic) long long statusFontMode;
@property (retain, nonatomic) NSNumber *statusBarHidden;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end
