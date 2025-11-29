@class NSNumber;

@interface AWEIMFansDeleteNoticeViewModel : AWEIMFansBaseViewModel

@property (retain, nonatomic) NSNumber *removingNoticeId;
@property (nonatomic) unsigned long long numberOfDeleted;
@property (nonatomic) BOOL isRemovingFansOnAir;

- (void)clickDeleteBtn:(id)a0 isFromLongPressAction:(BOOL)a1;
- (void)clickRemoveFansBtn:(id)a0 enterMethod:(id)a1;
- (void)p_refuseFollowRequest:(id)a0 indexPath:(id)a1 needShowSnackbar:(BOOL)a2;
- (void)removeModelAtIndexPath:(id)a0 isFollowRequestRefuse:(BOOL)a1 needReportDelete:(BOOL)a2;
- (BOOL)canDeleteCell:(id)a0 model:(id)a1;
- (void)p_showRefuseFollowRequestSnackBar:(id)a0 indexPath:(id)a1;
- (void)p_reportRefuseFollowRequest:(id)a0 atIndexPath:(id)a1;
- (void)revertRemovedModel:(id)a0 atIndexPath:(id)a1;
- (void)requestFollowRequestRefuse:(id)a0 trackParams:(id)a1;
- (BOOL)canRemoveModelAtIndexPath:(id)a0;
- (void)p_showRemoveFansSnackbar:(id)a0 notiModel:(id)a1 enterMethod:(id)a2;
- (void)requestDeleteNotice:(BOOL)a0 noticeId:(id)a1;
- (void)requestRemoveFollowerWithUserId:(id)a0 completion:(id /* block */)a1;
- (void)p_updateUnreadCountWhenDeleteRowAtIndexPath:(id)a0;
- (void)removeModelAtIndexPath:(id)a0 isFollowRequestRefuse:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
