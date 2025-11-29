@interface BDPShareCommonUtils_HG : NSObject

+ (void)tokenShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (void)shareAppInCustomizedChannel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (void)defaultShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (id)errorForCheckCommonWithUniqueID:(id)a0;
+ (id)errorForCheckShareBlockListWithChannel:(id)a0 uniqueID:(id)a1;
+ (id)errorForCheckParam:(id)a0;
+ (id)errorForCheckCustomShareChannelHandler:(id)a0;
+ (void)videoShareWithPrepareModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
+ (id)parseErrorWithError:(id)a0;
+ (id)errorForCheckPicturePath:(id *)a0 uniqueID:(id)a1;
+ (void)shareCompletedWithModel:(id)a0 uniqueID:(id)a1 result:(long long)a2 channel:(id)a3 error:(id)a4 info:(id)a5 callback:(id /* block */)a6;
+ (id)errorForCheckCutIDWithModel:(id)a0 eventParam:(id)a1;
+ (id)errorForCheckStickerIDWithModel:(id)a0 eventParam:(id)a1;
+ (id)errorForCheckVideoPath:(id *)a0 uniqueID:(id)a1;
+ (id)errorForCheckVideoPath:(id *)a0 uniqueID:(id)a1 ignoreDuration:(BOOL)a2;
+ (id)errorForCheckFilePath:(id *)a0 uniqueID:(id)a1 ignoreDuration:(BOOL)a2 isVideo:(BOOL)a3;

@end
