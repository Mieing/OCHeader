@interface WCShareCardUtil : MMObject

+ (id)getUserWCShareCardRootDir;
+ (id)getWCShareCardSyncInfoPath;
+ (id)getWCShareCardDBPath;
+ (id)getWCShareCardLayoutCache;
+ (id)getWCNewShareCardLayoutCache;
+ (id)getUserNickname:(id)a0;
+ (id)getUserRemarkname:(id)a0;
+ (void)openShareCardEntrance;
+ (BOOL)hasOpenShareCardEntrance;
+ (BOOL)GetWCShareCardSyncInfoFileIsExist;
+ (id)genStrokeLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(struct CGColor { } *)a1;
+ (id)genLabelWithFontSize:(double)a0 text:(id)a1 textColor:(id)a2 x:(double)a3 y:(double)a4 maxWidth:(double)a5 superView:(id)a6;
+ (id)genLabelWithFont:(id)a0 text:(id)a1 textColor:(id)a2 x:(double)a3 y:(double)a4 maxWidth:(double)a5 superView:(id)a6;
+ (id)genButtonWithFontSize:(double)a0 text:(id)a1 textColor:(id)a2 x:(double)a3 y:(double)a4 maxWidth:(double)a5 superView:(id)a6;

@end
