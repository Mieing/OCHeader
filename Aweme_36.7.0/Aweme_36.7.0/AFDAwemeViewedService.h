@class NSString;

@interface AFDAwemeViewedService : HTSService <AFDAwemeViewedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)storyShouldShowSingleViewerPanelVCWithModel:(id)a0;
- (id)awemeDiggListManager;
- (id)awemeViewedManager;

@end
