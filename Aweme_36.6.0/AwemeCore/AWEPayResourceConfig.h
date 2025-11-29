@class NSString, NSDictionary, AWEPaySpecialStyleParam;

@interface AWEPayResourceConfig : NSObject

@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *geckoPath;
@property (copy, nonatomic) NSDictionary *rawConfig;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double animationDelay;
@property (retain, nonatomic) AWEPaySpecialStyleParam *userInfoConfig;
@property (retain, nonatomic) AWEPaySpecialStyleParam *contentConfig;
@property (retain, nonatomic) AWEPaySpecialStyleParam *btnConfig;

- (id)initWithResourceId:(id)a0;
- (void)p_initData;
- (id)getLOTAnimationView;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
