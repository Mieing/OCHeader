@class NSString, AWEVideoPublishViewModel;

@interface AWEECommerceRecorderModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (nonatomic) BOOL isCameraInitial;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabConfigWithTitle:(id)a0 forMode:(id)a1;

- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (void).cxx_destruct;

@end
