@class NSString, AWEGrouponHalfCloseMaskAnimationConfigInfo, AWEGrouponHalfCloseAnimationConfigInfo;

@interface AWEGrouponHalfCloseAnimationConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (nonatomic) long long toolIconStayDuration;
@property (retain, nonatomic) AWEGrouponHalfCloseAnimationConfigInfo *animationConfig;
@property (retain, nonatomic) AWEGrouponHalfCloseMaskAnimationConfigInfo *maskAnimationConfig;
@property (copy, nonatomic) NSString *moduleId;
@property (copy, nonatomic) NSString *targetId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)maskAnimationConfigJSONTransformer;

- (void).cxx_destruct;

@end
