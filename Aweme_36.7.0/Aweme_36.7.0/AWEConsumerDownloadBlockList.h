@interface AWEConsumerDownloadBlockList : NSObject

+ (id)downloadBlockList;
+ (id)generateDownloadBlockList;
+ (id)downloadBlockListHiddenCommon;
+ (id)downloadBlockListHiddenLocal;
+ (id)downloadBlockListGrayedCommon;
+ (id)downloadBlockListGrayedLocal;
+ (BOOL)isControlledByPreventDownload:(id)a0;
+ (BOOL)isControlledByPreventDownloadType:(id)a0;
+ (BOOL)isNotAuthor:(id)a0;
+ (BOOL)forbidByAllowDownload:(id)a0;
+ (BOOL)authorIsPrivateAccount:(id)a0;
+ (id)downloadActionWithContext:(id)a0;
+ (void)actionWithContext:(id)a0;

@end
