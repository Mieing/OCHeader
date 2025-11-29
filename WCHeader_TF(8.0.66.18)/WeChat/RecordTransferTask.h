@class CMessageWrap;

@interface RecordTransferTask : MessageTransferTask

@property (retain, nonatomic) CMessageWrap *messageWrap;

- (void).cxx_destruct;

@end
