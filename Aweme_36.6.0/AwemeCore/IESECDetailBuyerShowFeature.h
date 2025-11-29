@class NSString;

@interface IESECDetailBuyerShowFeature : NSObject <IESECDetailBuyerShowFeature>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)getWaterfallVCWithProductID:(id)a0 headerTitle:(id)a1 tracker:(id)a2 trackParams:(id)a3;
- (id)init;
- (void)dealloc;

@end
