@class NSArray, NSDictionary, NSURL, NSString, AWEECPostShareInfoResponse;
@protocol AWESimplifyAIVideoClipManager, ACCMusicModelProtocol;

@interface AWEECHalfPostDataController : NSObject <AWEECHalfPostDataControllerProtocol>

@property (retain, nonatomic) id<AWESimplifyAIVideoClipManager> aiVideoClipManager;
@property (retain, nonatomic) AWEECPostShareInfoResponse *shareInfo;
@property (retain, nonatomic) NSDictionary *postParams;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicInfo;
@property (retain, nonatomic) NSURL *previewFileURL;
@property (retain, nonatomic) NSDictionary *commentsInfo;
@property (copy, nonatomic) NSArray *commentsArray;
@property (retain, nonatomic) NSDictionary *postInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)directCommentAndPostWithDataController:(id)a0 isSilentPost:(BOOL)a1 completion:(id /* block */)a2;
+ (void)editVCCommentAndPostWithDataController:(id)a0 publishModel:(id)a1 editService:(id)a2 completion:(id /* block */)a3;

- (void)startVideoPublishWithPublishModel:(id)a0 editService:(id)a1 isQuickStoryPublish:(BOOL)a2 isNewVideoPublish:(BOOL)a3 videoURL:(id)a4;
- (unsigned long long)getVideoStyleWithVideoPath:(id)a0 imagePathArray:(id)a1;
- (void)commitPostAndCommentInfoWithPublishModel:(id)a0 editService:(id)a1 videoStyle:(unsigned long long)a2 isNewVideoPublish:(BOOL)a3 completion:(id /* block */)a4;
- (void)postPreviewPathWithCompletion:(id /* block */)a0 isSilentPost:(BOOL)a1;
- (void)fetchAnchorInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
