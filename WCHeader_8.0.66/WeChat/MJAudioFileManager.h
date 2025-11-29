@class NSString;

@interface MJAudioFileManager : NSObject

@property (readonly, nonatomic) NSString *basePath;

+ (BOOL)createWAVFileFromPCMData:(id)a0 sampleRate:(long long)a1 outputPath:(id)a2;
+ (id)readPCMDataFromWAVFileAtPath:(id)a0;
+ (id)readAudioDataFromWAVFileAtPath:(id)a0;

- (id)initWithBasePath:(id)a0;
- (id)dirctoryPathForAudioFileWithIdentifier:(id)a0;
- (id)pcmFilePathForAudioFileWithIdentifier:(id)a0;
- (id)wavFilePathForAudioFileWithIdentifier:(id)a0;
- (id)silkFilePathForAudioFileWithIdentifier:(id)a0;
- (id)speechFilePathForAudioFileWithIdentifier:(id)a0 roleID:(id)a1;
- (id)speechFilePathForAudioFileWithIdentifier:(id)a0 roleID:(id)a1 textHash:(unsigned long long)a2;
- (id)speechFilePathForText:(id)a0 roleID:(id)a1;
- (id)pcmDataForAudioFileWithIdentifier:(id)a0;
- (id)silkDataForAudioFileWithIdentifier:(id)a0;
- (BOOL)createWAVFileFromPCMData:(id)a0 forIdentifier:(id)a1 roleID:(id)a2 sampleRate:(long long)a3;
- (BOOL)createWAVFileFromPCMData:(id)a0 forText:(id)a1 roleID:(id)a2 sampleRate:(long long)a3;
- (BOOL)createWAVFileFromPCMData:(id)a0 forIdentifier:(id)a1 roleID:(id)a2 textHash:(unsigned long long)a3 sampleRate:(long long)a4;
- (void).cxx_destruct;

@end
