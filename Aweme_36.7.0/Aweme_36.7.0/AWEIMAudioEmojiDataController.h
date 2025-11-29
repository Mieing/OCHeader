@class NSString;

@interface AWEIMAudioEmojiDataController : NSObject <IESIMAudioEmojiDataController>

@property (copy, nonatomic) NSString *defaultAudioEmojiPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cleanExpiredFiles;
- (void)cleanAllFiles;
- (id)filePathWithEmoticonModel:(id)a0 markAccess:(BOOL)a1;
- (BOOL)fileExistWithEmoticonModel:(id)a0;
- (void)downloadAudioWithContext:(id)a0;
- (void)logAudioEmoji:(id)a0 reason:(id)a1 extra:(id)a2;
- (BOOL)p_needRefreshURLForError:(id)a0;
- (void)p_retryDownloadAfterRefreshURLWithEmojiContext:(id)a0 fileName:(id)a1 emoticonModel:(id)a2 completion:(id /* block */)a3;
- (void)asyncMarkAccessForPath:(id)a0;
- (void).cxx_destruct;

@end
