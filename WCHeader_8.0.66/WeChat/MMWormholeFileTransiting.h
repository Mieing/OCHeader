@class NSString, NSFileManager;

@interface MMWormholeFileTransiting : NSObject <MMWormholeTransiting>

@property (copy, nonatomic) NSString *applicationGroupIdentifier;
@property (copy, nonatomic) NSString *directory;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)a0 optionalDirectory:(id)a1;
- (void)checkAppGroupCapabilities;
- (id)messagePassingDirectoryPath;
- (id)filePathForIdentifier:(id)a0;
- (BOOL)writeMessageObject:(id)a0 forIdentifier:(id)a1;
- (id)messageObjectForIdentifier:(id)a0;
- (void)deleteContentForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
