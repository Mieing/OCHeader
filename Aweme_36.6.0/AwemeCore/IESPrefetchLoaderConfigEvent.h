@class NSString, NSError;

@interface IESPrefetchLoaderConfigEvent : NSObject <IESPrefetchLoaderEvent>

@property (copy, nonatomic) NSString *project;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
