@class NSString, NSMutableDictionary;
@protocol ACCStickerServiceProtocol, ACCGlobalStickerServiceProtocol, ACCShootSameStickerConfigDelegation;

@interface ACCEditShootSameStickerViewModel : ACCEditViewModel <ACCShootSameStickerViewModelProtocol>

@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (copy, nonatomic) id /* block */ onSelectTimeCallback;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (weak, nonatomic) id<ACCShootSameStickerConfigDelegation> configDelegation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createHandlersFromPublishModel;
- (void)createStickerViews;
- (void)updateShootSameStickerModel;
- (void)updateStickerViews:(BOOL)a0;
- (id)adjustStickerLocationModel:(id)a0 fromShootCoordinateSystemSize:(struct CGSize { double x0; double x1; })a1 toContentCoordinateSystemSize:(struct CGSize { double x0; double x1; })a2 stickerHandler:(id)a3;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
