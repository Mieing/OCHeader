@class NSString;
@protocol AWESliderDelegate, ACCEditAdjustPanelDelegate, ACCEditAdjustPanelDataSource;

@interface ACCEditAdjustServiceImpl : NSObject <ACCEditAdjustServiceProtocol>

@property (weak, nonatomic) id<ACCEditAdjustPanelDelegate> adjustPanelDelegate;
@property (weak, nonatomic) id<ACCEditAdjustPanelDataSource> adjustPanelDataSource;
@property (weak, nonatomic) id<AWESliderDelegate> adjustSliderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableAdjust;
- (void)adjustPanelDidShow;
- (void).cxx_destruct;

@end
