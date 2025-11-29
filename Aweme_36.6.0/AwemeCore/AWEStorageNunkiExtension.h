@class NSString;

@interface AWEStorageNunkiExtension : NSObject <NunkiMessage>

@property unsigned long long dynamicCheckpointThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
