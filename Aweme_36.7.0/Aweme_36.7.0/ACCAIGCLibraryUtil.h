@class NSString;

@interface ACCAIGCLibraryUtil : NSObject <ACCAIGCLibraryUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateDataSource:(id)a0 profileModel:(id)a1;
+ (void)updateDataSource:(id)a0 needRefreshProfile:(BOOL)a1;
+ (id)placeholderImage:(struct CGSize { double x0; double x1; })a0;
+ (id)getImageByColor:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (double)cellWidthSpace;
+ (double)cellViewWidthOffset;
+ (id)getImageByColorArray:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (void)onButtonClickWithRecordModel:(id)a0 maxNumber:(long long)a1 enterFrom:(id)a2 enterMethod:(id)a3;
+ (void)enterLoadingViewHasDraftModel:(id)a0 isAIGCRecord:(BOOL)a1;
+ (void)enterLoadingViewWithoutDraftModel:(id)a0 isAIGCRecord:(BOOL)a1;
+ (id)getAIGCPassThroughInfoModel:(id)a0;
+ (void)showUnifyLoadingView:(id)a0;
+ (double)wallRatio;
+ (void)presentDetailVC:(id)a0 fromInspiration:(BOOL)a1;
+ (void)createProfileWith:(long long)a0 profileModel:(id)a1 isRecordPage:(BOOL)a2;
+ (void)customKeyWordsUGC:(id)a0 publishViewModel:(id)a1;
+ (double)cellHeightSpace;
+ (long long)AIGCCategoryId;
+ (void)queryProfileModel:(id /* block */)a0;
+ (void)enterEditPageWithRecordModel:(id)a0 isRecordPage:(BOOL)a1 isAIGCRecord:(BOOL)a2;
+ (void)enterEditPageDirectlyWithRecordModel:(id)a0;
+ (void)enterMultiPortraitDetailPageWithRecordModel:(id)a0 trackInfo:(id)a1 deleteActionBlock:(id /* block */)a2 updateModelBlock:(id /* block */)a3;
+ (BOOL)enterFailedLoadingViewWithModel:(id)a0;
+ (void)enterLoadingViewWithModel:(id)a0 isAIGCRecord:(BOOL)a1;
+ (id)inAlbumUnavailableToastText;
+ (id)inProgressTaskDraftIdWithTaskId:(id)a0;
+ (void)handleDeleteDraftsAlertWithDraftIds:(id)a0;
+ (struct CGSize { double x0; double x1; })cellSize;


@end
