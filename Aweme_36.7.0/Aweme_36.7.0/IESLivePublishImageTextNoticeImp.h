@class NSString;

@interface IESLivePublishImageTextNoticeImp : NSObject <IESLivePublishAppointmentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishVideoWithContent:(id)a0 time:(double)a1 avatarURLs:(id)a2 trackParams:(id)a3;
- (BOOL)shouldShowShareLiveToStoryEntrance;
- (void)publishImageToStoryWithContent:(id)a0 imageUrlList:(id)a1 jumpUrl:(id)a2 avatarUrlList:(id)a3 avatarURI:(id)a4 shareEnterMethod:(id)a5 extraParams:(id)a6 complete:(id /* block */)a7;
- (void)openEditorViewWithStickerConfig:(id)a0 image:(id)a1 targetTime:(double)a2 trackParams:(id)a3 resultBlock:(id /* block */)a4;
- (void)generateImage:(id)a0 block:(id /* block */)a1;
- (id)saveImage:(id)a0;
- (id)buildLiveShareTrackParamWithRoomID:(id)a0 enterMethod:(id)a1;
- (id)imageWithColor:(id)a0;

@end
