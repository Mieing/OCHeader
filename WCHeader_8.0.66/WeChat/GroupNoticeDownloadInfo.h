@class GroupNoticeItemDataField, NSString, GroupNoticeItem;

@interface GroupNoticeDownloadInfo : NSObject

@property (retain, nonatomic) GroupNoticeItemDataField *data;
@property (nonatomic) BOOL isThumb;
@property (weak, nonatomic) GroupNoticeItem *item;
@property (retain, nonatomic) NSString *fileKey;

+ (id)downloadInfoWithData:(id)a0 thumb:(BOOL)a1;

- (void).cxx_destruct;

@end
