@interface AWEListenFeedAdapterDefault : NSObject

+ (id)listenFeedTargetReferStrings;
+ (Class)dataControllerClassWithReferString:(id)a0 hasExternalDataController:(BOOL)a1 isUsedForSecondPage:(BOOL)a2 isUsedForListenModePage:(BOOL)a3;

- (id)listenFeedPageTitleString;
- (id)listenFeedTextString;
- (BOOL)supportMixVideo;

@end
