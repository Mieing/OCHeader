@class NSArray, XPlaySafeAreaInsets;

@interface XPlaySafeAreaInsetsModel : NSObject

@property (nonatomic) long long rotation;
@property (nonatomic) long long screenWidth;
@property (nonatomic) long long screenHeight;
@property (retain, nonatomic) XPlaySafeAreaInsets *safeInsets;
@property (copy, nonatomic) NSArray *boundingRects;

+ (id)modelWithUIWindow:(id)a0;
+ (long long)transformUIInterfaceOrientation:(long long)a0;

- (void).cxx_destruct;

@end
