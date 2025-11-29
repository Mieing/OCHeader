@class NSString;

@interface AWEIMAccessibilityUtility : HTSService <AWEIMAccessibilityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dfsCollectAccessibilityLabels:(id)a0 belowView:(id)a1;
+ (void)dfsCollectAccessibilityElements:(id)a0 inView:(id)a1;
+ (void)dfsCollectInteractAccessibilityElements:(id)a0 inView:(id)a1;
+ (void)dfsConfigAccessibilityLabelsBelowView:(id)a0;
+ (BOOL)isVisibleView:(id)a0;
+ (BOOL)isInteractiveTraits:(unsigned long long)a0;
+ (id)accessibilityLabelWithView:(id)a0;
+ (void)configYYLabelAccessibilityAction:(id)a0 attributedString:(id)a1;


@end
