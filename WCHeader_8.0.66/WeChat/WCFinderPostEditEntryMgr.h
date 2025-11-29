@class NSString, NSMutableDictionary, MMUIViewController, FinderLocation;
@protocol WCFinderPostEditEntrySnsProtocol;

@interface WCFinderPostEditEntryMgr : NSObject <WCFinderPostViewControllerDelegate, WCSightVideoCompositeTaskDelegate, WCEditImageViewControllerDelegate, WCFinderTemplateProcessViewControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *feedIdTaskIdDic;
@property (retain, nonatomic) NSMutableDictionary *compressTaskIdDic;
@property (retain, nonatomic) NSMutableDictionary *encodeTaskDic;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) FinderLocation *location;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (nonatomic) unsigned long long postFromScene;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *sessionId;
@property (weak, nonatomic) id<WCFinderPostEditEntrySnsProtocol> snsEditDelegate;
@property (weak, nonatomic) id<WCFinderPostEditEntrySnsProtocol> postDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getPostSceneByFromScene:(unsigned long long)a0;

- (void)enterPostPageEditVideoBySrcPHAsset:(id)a0 editVideoAttr:(id)a1 compositionAttr:(id)a2 sightDraft:(id)a3 content:(id)a4 location:(id)a5 fromVC:(id)a6 outputVideoPath:(id)a7 postFromScene:(unsigned long long)a8 templateInfo:(id)a9 completionHandler:(id /* block */)a10;
- (void)enterPostPageOriginalVideoBySrcPHAsset:(id)a0 content:(id)a1 location:(id)a2 postFromScene:(unsigned long long)a3 fromVC:(id)a4 outputVideoPath:(id)a5 templateInfo:(id)a6 completionHandler:(id /* block */)a7;
- (void)_encodeOriginalVideoByUrl:(id)a0 forDataItem:(id)a1 doneBlock:(id /* block */)a2;
- (void)enterPostPageByVideoPath:(id)a0 content:(id)a1 location:(id)a2 postFromScene:(unsigned long long)a3 fromVC:(id)a4 templateInfo:(id)a5 completionHandler:(id /* block */)a6;
- (void)presentFinderPostViewControllerWithPostSession:(id)a0 presentAnimated:(BOOL)a1 fromVC:(id)a2 completionHandler:(id /* block */)a3;
- (void)postViewControllerFromVC:(id)a0 postSession:(id)a1;
- (void)postViewControllerSaveDraftAndOpenProfile:(id)a0;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)removeCompressProgressFromDataItem:(id)a0;
- (BOOL)checkHadEncodingForDataItem:(id)a0;
- (void)recoverLocalUploadDataItem;
- (void)registerCompressCallbackFromDraftScene:(id /* block */)a0 withPostSession:(id)a1;
- (void)registerCompressCallback:(id /* block */)a0 fromPostSession:(id)a1;
- (void)sightVideoCompositeTask:(id)a0 didFinish:(BOOL)a1 withSightDraft:(id)a2;
- (id)getMaterialArrayFromImageModels:(id)a0;
- (id)convertImageModelsToImageArrayPromise:(id)a0;
- (void)enterPostPageByImageModels:(id)a0 content:(id)a1 location:(id)a2 fromVC:(id)a3 postFromScene:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)editImageViewController:(id)a0 didFinishEditingImage:(id)a1;
- (void)editImageViewControllerDidCancel:(id)a0;
- (void)finderTemplateProcessVC:(id)a0 didExportFinishWithPath:(id)a1 outputParams:(id)a2;
- (void)sendVideoWithDraft:(id)a0;
- (void)addCompositionTask:(id)a0 fromPostSession:(id)a1;
- (void).cxx_destruct;

@end
