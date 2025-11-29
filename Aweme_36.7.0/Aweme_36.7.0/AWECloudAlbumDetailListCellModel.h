@class ACCCameraSubscription, NSString, EcTaskItemState, EcAsset;

@interface AWECloudAlbumDetailListCellModel : NSObject <AWECloudAlbumDetailListCellModelProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) EcAsset *asset;
@property (copy, nonatomic) id /* block */ itemStateService;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) BOOL selectable;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, nonatomic) EcTaskItemState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyDidChangeUploadState:(id)a0;
- (void)notifyDidChangeCanSelect:(BOOL)a0;
- (void)notifyDidChangeSelection:(BOOL)a0;
- (void)notifyDidChangeIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
