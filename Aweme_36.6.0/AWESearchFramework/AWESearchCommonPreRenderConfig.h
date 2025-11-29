@class NSString;

@interface AWESearchCommonPreRenderConfig : NSObject

@property (nonatomic) BOOL enablePreRender;
@property (nonatomic) BOOL enableDummyPreRender;
@property (nonatomic) BOOL enableSlideStartPreRender;
@property (nonatomic) BOOL enableSlideEndPreRender;
@property (nonatomic) BOOL enableRefreshPreRender;
@property (nonatomic) BOOL enableLoadmorePreRender;
@property (retain, nonatomic) NSString *pitayaBusinessName;
@property (nonatomic) long long upListSize;
@property (nonatomic) long long downListSize;
@property (nonatomic) long long lagSize;
@property (nonatomic) long long intervalTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setupConfig;

@end
