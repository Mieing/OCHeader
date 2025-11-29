@class NSString;

@interface AWESonicJSONSerializationServiceImpl : NSObject <AWESonicJSONSerializationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void /* function */ *)AWESonicJSONObjectWithDataFunction;

@end
