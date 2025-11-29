@class NSMutableData;

@interface XPlayMultiPartFormDataUploadDataUploadData : NSObject

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) unsigned long long partHadSentDataLength;
@property (nonatomic) BOOL isFinished;

- (id)initWithData:(id)a0 partHadSentDataLength:(unsigned long long)a1 isFinished:(BOOL)a2;
- (void).cxx_destruct;

@end
