@interface AFDSocialTextManager : NSObject

+ (id)draftIDKey;
+ (id)ImageWithColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (void)removeSavedDraftID;
+ (void)saveDraftID:(id)a0;
+ (id)retrieveSavedDraftID;
+ (id)defaultBackgroundColor;
+ (id)backgroundColors;
+ (void)setDefaultColor:(id)a0;

@end
