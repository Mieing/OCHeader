@interface BDPGameUtils : NSObject

+ (id)getFromCommon:(id)a0 name:(id)a1;
+ (void)getGameSnapshot:(id)a0 afterUpdates:(BOOL)a1 completion:(id /* block */)a2;
+ (void)setToCommon:(id)a0 name:(id)a1 value:(id)a2;
+ (void)invokeEvent:(id)a0 uniqueID:(id)a1 paramDict:(id)a2 completion:(id /* block */)a3;
+ (void)showToast:(id)a0 cornerRadius:(double)a1;
+ (id)renderImageWithOption:(struct CGSize { double x0; double x1; })a0 opaque:(BOOL)a1 scale:(double)a2 operation:(id /* block */)a3;
+ (BOOL)needSnapshotFromFE:(id)a0;
+ (void)addShareParamToResult:(id)a0 bdplog:(id)a1;
+ (BOOL)needSnapshotFromFEWithEnginView:(id)a0;
+ (id)snapshotFromView:(id)a0 afterUpdates:(BOOL)a1;

@end
