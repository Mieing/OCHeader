@interface AWEIMMessageAttachment : NSObject

+ (id)relativeAttachmentPathForMD5:(id)a0 upload:(BOOL)a1 fileType:(int)a2;
+ (id)absoluteAttachmentPathForRelativeAttachmentPath:(id)a0;
+ (id)fileTypeStringForFileType:(int)a0;
+ (id)getMemoryCacheImageWithType:(int)a0 encryptedMessage:(id)a1;
+ (id)getLocalDiskImageCacheWithType:(int)a0 encryptedMessage:(id)a1;
+ (id)convertFileDicitonaryIntoString:(id)a0;
+ (id)attachmentNameForMD5:(id)a0 fileType:(int)a1 subType:(id)a2;
+ (id)relativeAttachmentPathForFileName:(id)a0 upload:(BOOL)a1;
+ (id)livePhotoCacheKeyFromAsset:(id)a0;
+ (id)livePhotoOrSlomoLocalDiskPathFromAssetIdentifier:(id)a0;
+ (id)currentUserAttachmentPath;
+ (void)saveLivePhotoOrSlomoLocalDiskPath:(id)a0 fromAssetIdentifier:(id)a1;
+ (id)fileTypeStringForFileType:(int)a0 subType:(id)a1;
+ (id)getMemoryCacheImageWithType:(int)a0 encryptedMessage:(id)a1 reduceResolutionValue:(id)a2;
+ (id)getAttachmentOtherPathWithPath:(id)a0;
+ (id)attachmentNameForUniqueID:(id)a0 fileType:(int)a1 subType:(id)a2;
+ (int)p_convertResourceTypeToFileType:(unsigned long long)a0;
+ (void)transfromDiskDataWithUid:(id)a0 newPath:(id)a1;
+ (void)transfromDiskDataWithUid:(id)a0 oldPath:(id)a1;
+ (id)p_fileTypeStringForFileType:(int)a0;
+ (id)attachmentNameForMD5:(id)a0 fileType:(int)a1;
+ (id)p_uniqueIdFormatWithKey:(id)a0 reduceResolutionValue:(id)a1;
+ (id)currentUserAttachmentCachePath;
+ (id)currentUserAttachmentSendPath;
+ (id)convertFileStringIntoDicitonary:(id)a0;
+ (void)removeOutOfDateLivePhotoLocalResource;
+ (id)sharedInstance;
+ (id)attachmentPath;

- (long long)totalCacheFileSize;
- (BOOL)clearIMCache;

@end
