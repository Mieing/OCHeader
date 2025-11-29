@class NSString;

@interface AWEAwemeLongPressFilterManager : NSObject <AWEAwemeLongPressFilterManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)filter:(id)a0 withContext:(id)a1;

@end
