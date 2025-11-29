@class NSMutableString;

@interface C2CFileReportData : NSObject

@property (nonatomic) unsigned long long sendHdImageFileCount;
@property (nonatomic) unsigned long long sendHdImageFileSize;
@property (nonatomic) unsigned long long recvHdImageFileCount;
@property (nonatomic) unsigned long long recvHdImageFileSize;
@property (retain, nonatomic) NSMutableString *sendHdImageFileSizeList;
@property (retain, nonatomic) NSMutableString *recvHdImageFileSizeList;
@property (nonatomic) unsigned long long sendMidImageFileCount;
@property (nonatomic) unsigned long long sendMidImageFileSize;
@property (nonatomic) unsigned long long recvMidImageFileCount;
@property (nonatomic) unsigned long long recvMidImageFileSize;
@property (retain, nonatomic) NSMutableString *sendMidImageFileSizeList;
@property (retain, nonatomic) NSMutableString *recvMidImageFileSizeList;
@property (nonatomic) unsigned long long sendThumbImageFileCount;
@property (nonatomic) unsigned long long sendThumbImageFileSize;
@property (nonatomic) unsigned long long recvThumbImageFileCount;
@property (nonatomic) unsigned long long recvThumbImageFileSize;
@property (retain, nonatomic) NSMutableString *sendThumbImageFileSizeList;
@property (retain, nonatomic) NSMutableString *recvThumbImageFileSizeList;
@property (nonatomic) unsigned long long sendHdVideoFileCount;
@property (nonatomic) unsigned long long sendHdVideoFileSize;
@property (nonatomic) unsigned long long recvHdVideoFileCount;
@property (nonatomic) unsigned long long recvHdVideoFileSize;
@property (retain, nonatomic) NSMutableString *sendHdVideoFileSizeList;
@property (retain, nonatomic) NSMutableString *recvHdVideoFileSizeList;
@property (nonatomic) unsigned long long sendCompressedVideoFileCount;
@property (nonatomic) unsigned long long sendCompressedVideoFileSize;
@property (nonatomic) unsigned long long recvCompressedVideoFileCount;
@property (nonatomic) unsigned long long recvCompressedVideoFileSize;
@property (retain, nonatomic) NSMutableString *sendCompressedVideoFileSizeList;
@property (retain, nonatomic) NSMutableString *recvCompressedVideoFileSizeList;
@property (nonatomic) unsigned long long sendThumbVideoFileCount;
@property (nonatomic) unsigned long long sendThumbVideoFileSize;
@property (nonatomic) unsigned long long recvThumbVideoFileCount;
@property (nonatomic) unsigned long long recvThumbVideoFileSize;
@property (retain, nonatomic) NSMutableString *sendThumbVideoFileSizeList;
@property (retain, nonatomic) NSMutableString *recvThumbVideoFileSizeList;
@property (nonatomic) unsigned long long sendAttachmentFileCount;
@property (nonatomic) unsigned long long sendAttachmentFileSize;
@property (nonatomic) unsigned long long recvAttachmentFileCount;
@property (nonatomic) unsigned long long recvAttachmentFileSize;
@property (retain, nonatomic) NSMutableString *sendAttachmentFileSizeList;
@property (retain, nonatomic) NSMutableString *recvAttachmentFileSizeList;
@property (nonatomic) unsigned long long sendVoiceFileCount;
@property (nonatomic) unsigned long long sendVoiceFileSize;
@property (nonatomic) unsigned long long recvVoiceFileCount;
@property (nonatomic) unsigned long long recvVoiceFileSize;
@property (retain, nonatomic) NSMutableString *sendVoiceFileSizeList;
@property (retain, nonatomic) NSMutableString *recvVoiceFileSizeList;
@property (nonatomic) unsigned long long sendRecordFileCount;
@property (nonatomic) unsigned long long sendRecordFileSize;
@property (nonatomic) unsigned long long recvRecordFileCount;
@property (nonatomic) unsigned long long recvRecordFileSize;
@property (retain, nonatomic) NSMutableString *sendRecordFileSizeList;
@property (retain, nonatomic) NSMutableString *recvRecordFileSizeList;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
