@class NSString;

@interface AWEEcomSearchResultConfig : NSObject

@property (nonatomic) BOOL disableBackground;
@property (nonatomic) BOOL disableToolArea;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL hideSearchDefaultBackground;
@property (nonatomic) BOOL isLiteMerchandise;
@property (nonatomic) BOOL needLogin;
@property (nonatomic) BOOL useFetchCompletion;
@property (nonatomic) BOOL disableLoading;
@property (nonatomic) double thresholdYR;
@property (nonatomic) double animationDuration;
@property (nonatomic) double thresholdH;
@property (nonatomic) double thresholdScale;

+ (id)mallPageSearchResultConfig;

- (void).cxx_destruct;

@end
