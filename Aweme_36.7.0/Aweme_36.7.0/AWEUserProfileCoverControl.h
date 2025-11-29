@class NSString, NSDictionary, AWEProfileCoverPreviewActionSheetManager;

@interface AWEUserProfileCoverControl : NSObject <AWEPhotosPreviewViewControllerDelegate>

@property (retain, nonatomic) AWEProfileCoverPreviewActionSheetManager *actionSheetManager;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSDictionary *selectCoverTrackParams;
@property (retain, nonatomic) NSDictionary *photosPreviewTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (void)selectCoverFromAlbum;
- (void)selectCoverWith:(id)a0;
- (void)coverPreViewWith:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showIndex:(long long)a2;
- (id)initWith:(id)a0 trackParams:(id)a1 selectCoverTrackParams:(id)a2;
- (void)showCompanyPreView:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showIndex:(long long)a2;
- (void)showUserPreView:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showIndex:(long long)a2;
- (void)p_selectCover;
- (void)p_showUserPreView:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 showIndex:(long long)a2;
- (void)p_showHeadBackgroundsWith:(id)a0 fromRect:(long long)a1;
- (void).cxx_destruct;

@end
