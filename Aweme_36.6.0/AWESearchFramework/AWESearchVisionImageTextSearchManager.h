@class NSString;

@interface AWESearchVisionImageTextSearchManager : NSObject <AWESearchVisionImageTextSearchManagerProtocol>

@property (copy, nonatomic) NSString *userLastQuery;
@property (nonatomic) double userLastQueryTimestamp;
@property (nonatomic) BOOL imageTextEnable;
@property (nonatomic) BOOL currentSearchReleateQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableAISearchNewFrameWorkScanCircle;
+ (BOOL)getVisionImageTextSearchEnable;
+ (id)shareInstance;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)recordUserLastQuery:(id)a0;
- (id)getUserLastQueryWithStartTime:(double)a0;
- (id)middlePageSuggestLastUserQuery;
- (void).cxx_destruct;

@end
