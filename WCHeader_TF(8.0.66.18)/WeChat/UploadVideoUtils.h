@interface UploadVideoUtils : NSObject

+ (id)getRawCacheFilePathFrom:(id)a0;
+ (id)getRawOutputFilePathFrom:(id)a0;
+ (BOOL)canUseMultiSocket:(id)a0;
+ (int)getNetworkType;
+ (unsigned int)getMediaSource:(unsigned int)a0;
+ (int)getMaxRetryCount;
+ (BOOL)isOpenSelectRawVideo;
+ (BOOL)isOpenOccupyMsgSend;
+ (unsigned long long)getLimitSendFileSize;
+ (unsigned long long)getVideoUploadValidateTime;
+ (BOOL)isCanRetryUpload:(id)a0;
+ (BOOL)isCanRetryUploadVideoCompressData:(id)a0;
+ (BOOL)isCanRetryUploadVideoRawData:(id)a0;
+ (BOOL)isApacCodecTrack:(id)a0;
+ (id)geneateNoApacExportSessionWithAsset:(id)a0;
+ (BOOL)isUseMavByCheckAssetAudio:(id)a0;
+ (id)getCodecTagName:(id)a0;

@end
