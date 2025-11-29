@class AWECommentModel, NSString, AWEAwemeModel;

@interface AWECommentShareService : AWEShareCommonImpl <AWEShareComment>

@property (weak, nonatomic) AWECommentModel *commentModel;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextWithAweme:(id)a0;
- (id)supportTypes;
- (unsigned long long)supportTypesCount;
- (id)commentContextWithAweme:(id)a0 commentModel:(id)a1;
- (id)commentContextWithHotSpotCommentModel:(id)a0;
- (void)showCommentAlertWithAweme:(id)a0 commentModel:(id)a1 shareType:(id)a2;
- (id)channelImage:(id)a0;
- (id)channelTitle:(id)a0;
- (id)commentShareSectionModel;
- (Class)commentShareSectionController;
- (id)commentShareSupportChannelTypes;
- (id)commentShareSupportActionTypes;
- (BOOL)canShowCommentForwardWithContext:(id)a0;
- (id)commentCellItemModel:(id)a0;
- (id)commentTask;
- (void)trackClickEvent:(id)a0 awemeModel:(id)a1 commentModel:(id)a2;
- (void)trackAlert:(id)a0 show:(BOOL)a1 cancel:(BOOL)a2 awemeModel:(id)a3 commentModel:(id)a4;
- (id)shortTokenText:(id)a0;
- (void).cxx_destruct;

@end
