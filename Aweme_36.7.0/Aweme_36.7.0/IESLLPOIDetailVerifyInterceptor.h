@class NSString, NSMutableArray;

@interface IESLLPOIDetailVerifyInterceptor : NSObject <IESLLRouterDelegate>

@property (retain, nonatomic) NSMutableArray *recentRouterURLs;
@property (readonly, nonatomic) NSString *latestRouterURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

@end
