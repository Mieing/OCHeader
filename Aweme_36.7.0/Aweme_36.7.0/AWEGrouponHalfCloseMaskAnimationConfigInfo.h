@class NSArray, NSString, AWEGrouponHalfCloseMaskAnimationDurationConfig;

@interface AWEGrouponHalfCloseMaskAnimationConfigInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double backgroundColorAlpha;
@property (copy, nonatomic) NSArray *highLightColorArr;
@property (nonatomic) long long borderWidth;
@property (nonatomic) long long borderRadius;
@property (nonatomic) long long scanTimes;
@property (nonatomic) long long animationDuration;
@property (nonatomic) long long stayDuration;
@property (retain, nonatomic) AWEGrouponHalfCloseMaskAnimationDurationConfig *maskAnimDurationConfig;
@property (copy, nonatomic) NSString *targetId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)maskAnimDurationConfigJSONTransformer;

- (void).cxx_destruct;

@end
