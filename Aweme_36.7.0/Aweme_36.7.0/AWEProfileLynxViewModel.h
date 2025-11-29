@class NSString, AWEProfileLynxConfiguration, NSDictionary, NSNumber;

@interface AWEProfileLynxViewModel : NSObject

@property (retain, nonatomic) AWEProfileLynxConfiguration *config;
@property (nonatomic) long long annieXContainerType;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) long long defaultLynxVisiableHeight;
@property (nonatomic) BOOL isOptimized;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastLynxContentOffset;
@property (nonatomic) BOOL fromHome;
@property (readonly, nonatomic) NSDictionary *commonTrackDict;
@property (readonly, nonatomic) NSNumber *tabId;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *businessType;
@property (readonly, nonatomic) NSDictionary *queryDict;
@property (readonly, nonatomic) NSDictionary *globalProps;
@property (readonly, nonatomic) NSDictionary *profileNewSchemaDict;
@property (readonly, nonatomic) long long tabVisibleHeight;
@property (copy, nonatomic) NSString *exraInfo;

- (id)tabHelper;
- (id)tabModel;
- (id)segmentView;
- (id)serverMobParams;
- (id)tabEnterMethod;
- (double)getLynxContainerMaxHeight;
- (double)getTabbarHeight;
- (id)profileContainer;
- (id)getLynxPageBgColor;
- (double)getDefaultLynxVisiableHeight:(double)a0;
- (void)updateCommonQueryDict;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
