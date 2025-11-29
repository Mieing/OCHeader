@interface BTMinimizeMpArticleSnapshotMgr : MMObject

+ (void)genMinimizeSnapshotWithReaderItemCellViewModel:(id)a0 contact:(id)a1 completionBlock:(id /* block */)a2;
+ (void)__addSnapshotView:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)checkDataValidWithItemShowType:(unsigned int)a0 title:(id)a1 bizNickname:(id)a2 coverImgUrl:(id)a3;
+ (void)genMinimizeSnapshotWithRecAppMsgViewModel:(id)a0 contact:(id)a1 completionBlock:(id /* block */)a2;

@end
