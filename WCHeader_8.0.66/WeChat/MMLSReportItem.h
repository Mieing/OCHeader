@interface MMLSReportItem : NSObject

@property (nonatomic) unsigned int reportStart;
@property (nonatomic) BOOL singleChat;
@property (nonatomic) unsigned int limitSession;
@property (nonatomic) unsigned long long sessionCnt;
@property (nonatomic) unsigned long long msgSize;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long audioSize;
@property (nonatomic) unsigned long long audioCount;
@property (nonatomic) unsigned long long thumbSize;
@property (nonatomic) unsigned long long thumbCount;
@property (nonatomic) unsigned long long videoSize;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long imageSize;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) unsigned long long recordSize;
@property (nonatomic) unsigned long long recordCount;
@property (nonatomic) unsigned long long imageThumbSize;
@property (nonatomic) unsigned long long imageThumbCount;
@property (nonatomic) unsigned long long videoThumbSize;
@property (nonatomic) unsigned long long videoThumbCount;
@property (nonatomic) unsigned long long appThumbSize;
@property (nonatomic) unsigned long long appThumbCount;

- (id)init;
- (id)getReportLog1;
- (id)getReportLog2;
- (id)getReportLog3;

@end
