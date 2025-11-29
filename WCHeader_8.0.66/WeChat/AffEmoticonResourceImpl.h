@class NSString;

@interface AffEmoticonResourceImpl : NSObject <AffEmoticonResourceBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getEmoticonPathOfMemoryTempDir;
- (id)getEmoticonRootDirOfSharedCacheDir;
- (id)getEmoticonRootDirOfUserCacheDir;
- (id)getEmoticonPathOfUserCoreDir;
- (id)getResourcePathInBundle:(id)a0;

@end
