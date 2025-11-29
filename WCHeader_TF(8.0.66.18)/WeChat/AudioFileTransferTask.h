@class AudioFileTransferInfo;

@interface AudioFileTransferTask : NSObject

@property (retain, nonatomic) AudioFileTransferInfo *info;

- (id)initWithInfo:(id)a0;
- (id)promiseTransferedFile;
- (void).cxx_destruct;

@end
