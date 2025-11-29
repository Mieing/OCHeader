@class IESUserPageFeatLocalModel, IESUserPageFeatUploadModel, IESUserPageFeatTrackModel;

@interface IESUserPageFeatInfo : NSObject <NSCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) IESUserPageFeatUploadModel *recordModel;
@property (retain, nonatomic) IESUserPageFeatTrackModel *trackModel;
@property (retain, nonatomic) IESUserPageFeatLocalModel *localModel;

- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
