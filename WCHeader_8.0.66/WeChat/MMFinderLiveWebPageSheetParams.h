@class NSString, UIViewController, UIColor;

@interface MMFinderLiveWebPageSheetParams : NSObject

@property (retain, nonatomic) NSString *uri;
@property (nonatomic) BOOL showDislike;
@property (nonatomic) BOOL supportSharing;
@property (nonatomic) double screenRatio;
@property (nonatomic) BOOL overrideCache;
@property (retain, nonatomic) UIViewController *fromVc;
@property (nonatomic) BOOL supportLandsacpe;
@property (nonatomic) BOOL forbidAutoUpateTitle;
@property (nonatomic) BOOL showFromRightToLeftAtLandscape;
@property (retain, nonatomic) UIColor *navButtonTintColor;
@property (nonatomic) BOOL fixOrientation;
@property (nonatomic) BOOL restrictVideoRect;

+ (id)paramsWithUri:(id)a0 showDislike:(BOOL)a1 supportSharing:(BOOL)a2;
+ (id)paramsWithUri:(id)a0 showDislike:(BOOL)a1 supportSharing:(BOOL)a2 screenRatio:(double)a3;
+ (id)paramsWithUri:(id)a0 showDislike:(BOOL)a1 supportSharing:(BOOL)a2 screenRatio:(double)a3 overrideCache:(BOOL)a4;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
