@class NSString, NSDictionary, NSError;

@interface IESPrefetchLoaderAPIEvent : NSObject <IESPrefetchLoaderEvent>

@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long cacheStatus;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
