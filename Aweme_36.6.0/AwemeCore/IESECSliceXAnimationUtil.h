@interface IESECSliceXAnimationUtil : NSObject

+ (BOOL)isSliceKeyExistedWithElementView:(id)a0;
+ (id)getOldValueForProperty:(unsigned long long)a0 elementView:(id)a1;
+ (id)valueStorageKeyForProperty:(unsigned long long)a0;
+ (BOOL)needToTransitionAnimateOnElementView:(id)a0 transitionProperty:(unsigned long long)a1 sliceXStyle:(id)a2;
+ (void)storeNewValueForProperty:(unsigned long long)a0 value:(id)a1 elementView:(id)a2;

@end
