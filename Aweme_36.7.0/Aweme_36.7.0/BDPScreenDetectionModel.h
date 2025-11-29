@class BDPBootManager, NSString, NSDictionary, NSDate, BDPUniqueID;

@interface BDPScreenDetectionModel : NSObject

@property (retain, nonatomic) BDPBootManager *bootManager;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *routeID;
@property (nonatomic) long long webViewID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } detectionRect;
@property (nonatomic) BOOL hasWebView;
@property (nonatomic) unsigned long long pageStayDuration;
@property (copy, nonatomic) NSString *timing;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *startPagePath;
@property (copy, nonatomic) NSString *startPageUrl;
@property (copy, nonatomic) NSString *nextPagePath;
@property (copy, nonatomic) NSString *nextRouteType;
@property (copy, nonatomic) NSString *renderType;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL shouldCacheSnapshot;
@property (nonatomic) long long shelledTechType;

- (void).cxx_destruct;
- (id)init;

@end
