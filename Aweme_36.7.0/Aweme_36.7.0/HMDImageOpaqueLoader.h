@class NSArray, NSString, NSMutableSet;

@interface HMDImageOpaqueLoader : NSObject {
    NSString *_directory;
    NSMutableSet *_mainFileSet;
    NSMutableSet *_loadCommandFileSet;
    NSMutableSet *_realTimeFileSet;
    unsigned long long _fileLoaded;
}

@property (nonatomic) BOOL envAbnormal;
@property (readonly, nonatomic) unsigned long long currentlyImageCount;
@property (readonly, nonatomic) NSArray *currentlyUsedImages;

- (void)loadMain;
- (void)loadExternal;
- (id)loadImageFile:(id)a0 error:(id *)a1;
- (unsigned long long)currentlyImageCount;
- (id)imageForAddress:(unsigned long long)a0;
- (id)currentlyUsedImages;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDirectory:(id)a0;

@end
