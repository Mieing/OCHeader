@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCChangeBackGroundViewModel : NSObject <ACCChangeBackGroundService>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableArray *colorList;
@property (nonatomic) BOOL showChangeBackGroundItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initColorConfig;
- (void)changeToUpperColor;
- (void)changeToNextBackground;
- (BOOL)applyNotBlackColor;
- (void)cacheApplyNotBlackColor;
- (BOOL)ifDefaultUpperColor;
- (void)setBlackColorCache;
- (id)initWithSequenceService:(id)a0 editService:(id)a1 publishModel:(id)a2;
- (void)changeToCurrentIndex;
- (void).cxx_destruct;

@end
