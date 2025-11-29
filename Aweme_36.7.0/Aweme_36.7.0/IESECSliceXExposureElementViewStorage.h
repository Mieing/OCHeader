@class NSMutableDictionary;

@interface IESECSliceXExposureElementViewStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *exposureMap;

- (BOOL)isElementViewHasExposuredWithUniqueID:(id)a0 elementID:(id)a1 threshold:(double)a2;
- (void)exposureElementViewWithUniqueID:(id)a0 elementID:(id)a1 threshold:(double)a2;
- (void).cxx_destruct;
- (void)reset;

@end
