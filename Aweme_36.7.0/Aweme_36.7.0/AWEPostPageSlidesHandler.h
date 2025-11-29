@class NSString, ACCVideoPublishContextSnap;
@protocol AWEPostPageContext;

@interface AWEPostPageSlidesHandler : NSObject <AWEPostPageSlidesService>

@property (retain, nonatomic) ACCVideoPublishContextSnap *originSnap;
@property (nonatomic) long long needSaveBackToPublishPageSignal;
@property (nonatomic) long long noSaveBackToPublishPageSignal;
@property (nonatomic) long long publishPageJumpToEditPageSignal;
@property (nonatomic) long long slidesLongVideoOpenAdvanceEditorSignal;
@property (copy, nonatomic) id /* block */ getTableViewOffsetByCoverSize;
@property (nonatomic) BOOL isSyncingData;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)updateMusicInfo;
- (BOOL)isImagesEdited;
- (BOOL)isPublishTitleEdited;
- (void)originContextSnap;
- (BOOL)isContextEdited;
- (void)sendNeedSaveBackToPublishPage;
- (void)sendSlidesLongVideoOpenAdvanceEditor;
- (void)sendNoSaveBackToPublishPage;
- (void)sendJumpToEditPage;
- (void).cxx_destruct;

@end
