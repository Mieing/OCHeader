@class UIColor, NSString, NSDictionary, NSArray;

@interface WCFinderFlutterHalfScreenVCConfig : NSObject

@property (copy, nonatomic) NSString *router;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSArray *plugins;
@property (nonatomic) long long closeBtnStyle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double halfScreenHeight;
@property (nonatomic) double halfScreenHeightRatio;
@property (nonatomic) double halfScreenMaxHeightRatio;
@property (copy, nonatomic) id /* block */ afterFlutterUISetup;

- (id)init;
- (void).cxx_destruct;

@end
