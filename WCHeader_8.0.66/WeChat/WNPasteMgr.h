@class NSString, GroupNoticeItem;

@interface WNPasteMgr : MMObject <GroupNoticeDownloadExt>

@property (retain, nonatomic) GroupNoticeItem *downloadingItem;
@property (copy, nonatomic) id /* block */ downloadCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)copy:(id)a0 sections:(id)a1 itemLocalId:(int)a2 fromMessage:(id)a3 isFromGroupNotice:(BOOL)a4;
+ (void)tryRemoveRiskDataFromStorageForMsgScene:(id)a0 msg:(id)a1;
+ (BOOL)copyFromGroupNotice;
+ (void)resetFileInfoInPasteData;
+ (id)getTempPathWithMd5:(id)a0 isThumb:(BOOL)a1 dataFmt:(id)a2;
+ (void)resetFilePathForMessageInfo:(id)a0;
+ (id)getDescOfAttachment:(id)a0;
+ (id)getPasteData;
+ (void)asyncGetPasteData:(id /* block */)a0 viewController:(id)a1;
+ (id)getPasteSection;
+ (void)clearPasteData;
+ (BOOL)hasPasteData;
+ (BOOL)hasCopyDataInTemp;
+ (void)tryClearPasteData:(int)a0;

- (void)downloadPasteDataIfNeed:(id /* block */)a0;
- (void)onGroupNoticeDownloadItem:(id)a0 retCode:(int)a1;
- (void).cxx_destruct;

@end
