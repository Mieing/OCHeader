@class NSString;

@interface IESLiveVideoAdjustHelper : NSObject <IESLiveVideoAdjustHelperService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)outputValueForItem:(id)a0;
- (long long)unNormalizedOutputValueForItem:(id)a0;
- (void)storeValue:(long long)a0 forItem:(id)a1;
- (double)normalizedValue:(double)a0 forItem:(id)a1;
- (void)storeSelectIndex:(unsigned long long)a0 Foritem:(id)a1;
- (unsigned long long)currentSelectIndexForItem:(id)a0;
- (long long)storeBeautyValueForItem:(id)a0;
- (unsigned long long)currentSelectIndexForStableModeWithItem:(id)a0;

@end
