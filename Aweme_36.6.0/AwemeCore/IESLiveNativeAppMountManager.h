@class NSString, IESLiveNativeAppCardEditorViewController, IESLiveNativeAppApi, ShelfInfo, NSNumber;
@protocol IESLiveNativeAppMountDelegate;

@interface IESLiveNativeAppMountManager : NSObject <BDLOCNativeAppMountDelegate, IESLiveNativeAppCardEditorDelegate>

@property (copy, nonatomic) id /* block */ mountCompletion;
@property (retain, nonatomic) IESLiveNativeAppCardEditorViewController *cardEditor;
@property (retain, nonatomic) IESLiveNativeAppApi *api;
@property (retain, nonatomic) NSNumber *maxShelves;
@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (weak, nonatomic) id<IESLiveNativeAppMountDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getProductInfoWithAppId:(id)a0 schema:(id)a1 timeout:(id)a2 completion:(id /* block */)a3;
- (void)nativeAppDidMountWithParams:(id)a0 coverImage:(id)a1 completion:(id /* block */)a2;
- (void)nativeAppCancelMountWithParams:(id)a0 completion:(id /* block */)a1;
- (id)mountedData;
- (void)completeWithShelfInfo:(id)a0;
- (void)cardEditor:(id)a0 willCancelEditShelfInfo:(id)a1;
- (void)cardEditor:(id)a0 didSaveData:(id)a1;
- (id)buildShelfInfoWithParams:(id)a0;
- (void)handleShelfInfo:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void)trackAddButtonDidClickWithShelfInfo:(id)a0;
- (void)trackShelfCompleteWithShelfInfo:(id)a0;
- (id)cutCoverImage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
