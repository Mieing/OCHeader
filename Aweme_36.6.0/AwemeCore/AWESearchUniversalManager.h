@class NSString, UIView;
@protocol AWEPublishProgressViewProtocol;

@interface AWESearchUniversalManager : NSObject <AWESearchUniversalManagerProtocol>

@property (nonatomic) BOOL concernFullVCAppear;
@property (nonatomic) BOOL nearbyVCAppear;
@property (nonatomic) BOOL nearbyFullVCAppear;
@property (retain, nonatomic) UIView<AWEPublishProgressViewProtocol> *progressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setPublishProgressViewHiden:(BOOL)a0 WithAnimation:(BOOL)a1;
- (void)recordNearbyVCAppearStatus:(BOOL)a0;
- (BOOL)nearbyVCAppearStatus;
- (void)recordNearbyFullVCAppearStatus:(BOOL)a0;
- (BOOL)nearbyFullVCAppearStatus;
- (void)recordConcernFullVCAppearStatus:(BOOL)a0;
- (BOOL)concernFullVCAppearStatus;
- (void)setupUploadProgressViewDisplayType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
