@class NSString, ACCVideoEditMusicViewModel, ACCMusicPlayControl, ACCMusicPickerBizComponent, ACCMusicClipBizComponent;
@protocol IESServiceRegister, IESServiceProvider;

@interface ACCMusicBizComponent : NSObject <ACCMusicBizComponentProtocol>

@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCVideoEditMusicViewModel *musicEditService;
@property (retain, nonatomic) ACCMusicPickerBizComponent *pickerBiz;
@property (retain, nonatomic) ACCMusicClipBizComponent *clipBiz;
@property (retain, nonatomic) ACCMusicPlayControl *playControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceContainer:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
