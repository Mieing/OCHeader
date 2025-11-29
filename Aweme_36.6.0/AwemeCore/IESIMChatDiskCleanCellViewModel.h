@class NSArray, NSString;

@interface IESIMChatDiskCleanCellViewModel : NSObject

@property (nonatomic) BOOL checked;
@property (nonatomic) long long videoDiskSize;
@property (nonatomic) long long imageDiskSize;
@property (nonatomic) long long fileDiskSize;
@property (nonatomic) long long chatDiskSize;
@property (nonatomic) unsigned long long conType;
@property (copy, nonatomic) NSArray *avatarUrlList;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSArray *threadCids;

+ (double)cellHeight;

- (long long)totalDiskSize;
- (void)fetchLiveCustomInfoWithCon:(id)a0 completion:(id /* block */)a1;
- (long long)totalAttachmentDiskSize;
- (void)cleanAllAttachmentSize;
- (void)fetchCellDataIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
