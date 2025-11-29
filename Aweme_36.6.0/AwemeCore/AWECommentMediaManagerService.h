@interface AWECommentMediaManagerService : NSObject <AWECommentMediaManagerServiceProtocol>

- (Class)pictureDownloaderClass;
- (Class)mediaEditClass;
- (id)mediaUploaderManager;
- (Class)awemePublishClass;
- (id)livePhotoConsumeDir;
- (id)fileManager;
- (id)init;

@end
