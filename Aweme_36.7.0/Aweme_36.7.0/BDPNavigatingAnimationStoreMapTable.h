@class NSString, NSMapTable;

@interface BDPNavigatingAnimationStoreMapTable : NSObject <BDPNavigatingAnimationStore>

@property (retain, nonatomic) NSMapTable *backgroundViewLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allControllers;
- (id)allBackgroundViews;
- (id)getBackgroundView:(id)a0;
- (void)setBackgroundView:(id)a0 controller:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
