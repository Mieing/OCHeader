@class NSString, NSFileManager, NSData, NSURL;

@interface FBSDKAudioResourceLoader : NSObject {
    NSFileManager *_fileManager;
    NSURL *_fileURL;
    unsigned int _systemSoundID;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSData *data;
@property (class, readonly, nonatomic) unsigned long long version;

+ (id)sharedLoader;

- (id)init;
- (void)dealloc;
- (BOOL)loadSound:(id *)a0;
- (void)playSound;
- (id)_fileURL:(id *)a0;
- (void).cxx_destruct;

@end
