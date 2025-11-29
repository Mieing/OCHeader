@interface AWEFeedArticleAnchorManager : NSObject

+ (BOOL)isToutiaoInstalled;
+ (BOOL)isToutiaoLiteInstalled;
+ (id)separateGroupIDFromSchema:(id)a0;
+ (BOOL)anchorViewWillShowOnSuperview:(id)a0 referString:(id)a1;
+ (BOOL)anchorViewClicked:(id)a0 referString:(id)a1;
+ (BOOL)isMpArticleAnchor:(id)a0;
+ (id)articleAnchorCommonTrackEventParams:(id)a0 referString:(id)a1;
+ (id)extraParamsFromOpenURLString:(id)a0;
+ (id)separateDiversionTypeFromSchema:(id)a0;

@end
