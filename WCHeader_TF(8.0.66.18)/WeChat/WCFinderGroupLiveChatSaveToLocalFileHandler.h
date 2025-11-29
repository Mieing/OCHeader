@class NSString;

@interface WCFinderGroupLiveChatSaveToLocalFileHandler : WCFinderGroupLiveChatSaveToLocalBaseHandler

@property (nonatomic) unsigned int lastCRC32;
@property (retain, nonatomic) NSString *filePath;

- (BOOL)save:(id)a0 filePath:(id)a1;
- (BOOL)checkFreeTmpSpaceWriteSize:(unsigned long long)a0;
- (id)loadWithFilePath:(id)a0;
- (void)clear;
- (BOOL)finishSaveAndUpdateTag:(id)a0;
- (BOOL)finishSaveAndUpdateTag:(id)a0 tag:(unsigned long long)a1;
- (void)setupFilePath:(id)a0;
- (void).cxx_destruct;

@end
