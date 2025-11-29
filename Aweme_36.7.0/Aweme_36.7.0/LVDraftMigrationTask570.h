@interface LVDraftMigrationTask570 : LVDraftMigrationTask

- (void)migrateDraft:(id)a0;
- (void)removeRedundantKeyframes:(id)a0;
- (id)getKeyframeMapFrom:(id)a0;
- (BOOL)filterKeyframeID:(id)a0 keyframes:(id)a1 keyframeMap:(id)a2 withUniqTimeOffsets:(id)a3 withUniqKeyframeRefs:(id)a4;

@end
