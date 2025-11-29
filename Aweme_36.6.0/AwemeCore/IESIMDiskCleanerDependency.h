@class NSString;

@interface IESIMDiskCleanerDependency : NSObject <IESIMDiskCleanerDependency>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)extraCleanPaths;

@end
