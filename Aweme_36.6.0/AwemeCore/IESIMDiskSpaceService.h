@class NSString;

@interface IESIMDiskSpaceService : HTSService <IESIMDiskSpaceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)calculateDiskSpaceWithCompletion:(id /* block */)a0;

@end
