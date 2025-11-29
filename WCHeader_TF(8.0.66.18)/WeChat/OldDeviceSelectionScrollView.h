@class NSArray, NSString;
@protocol ScrollItemSelectionDelegate;

@interface OldDeviceSelectionScrollView : MMScrollStack <MMIconItemDelegate>

@property (retain, nonatomic) NSArray *deviceArray;
@property (weak, nonatomic) id<ScrollItemSelectionDelegate> selectDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevices:(id)a0 delegate:(id)a1 hasMore:(BOOL)a2 hasOthers:(BOOL)a3;
- (void)initView;
- (void)addOthersIcon;
- (void)addMoreIconView;
- (void)onItemClicked:(id)a0;
- (void).cxx_destruct;

@end
