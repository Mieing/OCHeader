@class NSString, NSMutableArray;

@interface AWELiveInfoPanelFactoryImpl : NSObject <IESLiveInfoPanelFactory>

@property (retain, nonatomic) NSMutableArray *executors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInfoPanel:(id)a0 panelModel:(id)a1;
- (void).cxx_destruct;

@end
