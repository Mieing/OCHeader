@class NSString, NSArray, NSDictionary;

@interface IESLiveRevenueInteractLynxComponentConfig : NSObject

@property (copy, nonatomic) NSString *originalConfig;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSArray *urlParams;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) double width;
@property (nonatomic) double widthRadio;
@property (nonatomic) double height;
@property (nonatomic) double heightRadio;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginLeftRadio;
@property (nonatomic) double marginRight;
@property (nonatomic) double marginRightRadio;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginTopRadio;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginBottomRadio;
@property (nonatomic) long long horizontalAlign;
@property (nonatomic) long long verticalAlign;
@property (nonatomic) long long z;
@property (copy, nonatomic) NSArray *observer;
@property (nonatomic) long long belongLayer;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL toFront;
@property (nonatomic) long long addViewPosition;
@property (copy, nonatomic) NSDictionary *extraUrlParams;

- (id)initWithJsonConfig:(id)a0 originalConfig:(id)a1;
- (void).cxx_destruct;

@end
