@class AWEEditMusicCapsuleModel;

@interface AWEStudioEditImpl.EditMusicCapsuleAPI : NSObject <AWEStudioEditMusicCapsuleAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logicComponent;
}

@property (nonatomic, readonly) AWEEditMusicCapsuleModel *musicModel;

- (void)updateWithMusicModel:(id)a0;
- (void)updateCapsuleColorStyle:(BOOL)a0;
- (void)addMusicModelSubscriber:(id)a0;
- (void)removeMusicModelSubscriber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)capsuleView;

@end
