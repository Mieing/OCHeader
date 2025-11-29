@class IESGCPTrackerNodeConfig, NSString, NSDictionary, NSMutableSet, UIView;
@protocol IESGCPTrackerInterceptor;

@interface IESGCPTrackerNode : NSObject

@property (weak, nonatomic) UIView *targetView;
@property (nonatomic) double showedTime;
@property (retain, nonatomic) id<IESGCPTrackerInterceptor> nodeIntercetor;
@property (retain, nonatomic) NSMutableSet *showedNodeTags;
@property (copy, nonatomic) NSDictionary *commonCacheParams;
@property (copy, nonatomic) NSDictionary *routeCacheParams;
@property (copy, nonatomic) NSDictionary *locationCacheParams;
@property (copy, nonatomic) NSDictionary *parentFlatCacheAttribute;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESGCPTrackerNodeConfig *config;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *attribute;
@property (copy, nonatomic) id /* block */ attributeGetter;
@property (copy, nonatomic) id /* block */ actionTrigger;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (copy, nonatomic) NSDictionary *customCommonParams;
@property (nonatomic) BOOL disableHookPageView;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *sourceBTMToken;

- (id)mapBTMFromSetting;
- (void).cxx_destruct;

@end
