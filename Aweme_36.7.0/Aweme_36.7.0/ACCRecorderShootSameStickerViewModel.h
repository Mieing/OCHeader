@class NSString, NSMutableArray, NSMutableDictionary;
@protocol ACCRecorderStickerServiceProtocol, ACCShootSameStickerConfigDelegation;

@interface ACCRecorderShootSameStickerViewModel : ACCRecorderViewModel <ACCShootSameStickerViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *addedStickerViews;
@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
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
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
