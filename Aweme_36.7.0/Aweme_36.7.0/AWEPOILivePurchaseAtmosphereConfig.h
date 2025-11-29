@class UIFont;

@interface AWEPOILivePurchaseAtmosphereConfig : NSObject

@property (nonatomic) long long viewType;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentMaxWidth;
@property (nonatomic) double contentWidth;
@property (nonatomic) double paddingLeft;
@property (retain, nonatomic) UIFont *xFont;
@property (retain, nonatomic) UIFont *numberFont;
@property (nonatomic) double enterAnimateOffsetX;
@property (nonatomic) double leaveAnimateOffsetX;

+ (id)shelfConfig;
+ (id)explainConfig;

- (void).cxx_destruct;

@end
