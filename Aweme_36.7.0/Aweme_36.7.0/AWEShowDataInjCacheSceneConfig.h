@class NSString, NSDictionary, NSArray;

@interface AWEShowDataInjCacheSceneConfig : NSObject

@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSDictionary *requestPararms;
@property (nonatomic) double timeout;
@property (nonatomic) double expire;
@property (nonatomic) double maxCount;
@property (readonly, nonatomic) BOOL isGroupScene;
@property (copy, nonatomic) NSString *requestURLString;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) long long maxRetryCount;
@property (copy, nonatomic) NSArray *whiteStatusCodes;
@property (copy, nonatomic) NSArray *subScenes;
@property (nonatomic) unsigned long long fetchStrtegy;

- (id)generateSceneConfigInfo;
- (void).cxx_destruct;
- (id)init;

@end
