@class NSString;

@interface WCPlayerLoadingRequest : NSObject

@property (nonatomic) unsigned int requestSeq;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } requestRange;
@property (nonatomic) unsigned long long readablePos;
@property (retain, nonatomic) NSString *fileName;

- (BOOL)isM3U8;
- (BOOL)isFinished;
- (unsigned long long)requestedOffset;
- (long long)requestedLength;
- (unsigned long long)currentOffset;
- (BOOL)requestsAllDataToEndOfResource;
- (void)respondWithData:(id)a0;
- (void)notifyDataReady:(long long)a0 length:(long long)a1;
- (void)finishLoadingWithError:(id)a0;
- (void)finishLoading;
- (BOOL)fillInformationWithMimeType:(id)a0 length:(long long)a1;
- (id)description;
- (id)loadingRequest;
- (BOOL)isShouldfillInformation;
- (void)setNotifyDataPath:(id)a0;
- (void).cxx_destruct;

@end
