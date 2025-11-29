@class NSString, NSMutableDictionary;

@interface CachalotLayoutFactory : NSObject <CachalotLayoutFactory>

@property (retain, nonatomic) NSMutableDictionary *registeredLayouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
