@class NSString;

@interface WCPlayerBufferEvent : NSObject

@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *mediaIdentify;
@property (nonatomic) float playbackTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long bufferStartDataLen;
@property (nonatomic) unsigned long long bufferEndDataLen;
@property (nonatomic) unsigned long long bufferType;
@property (nonatomic) unsigned long long exitType;
@property (nonatomic) float bufferedLen;

- (id)initWithBufferType:(unsigned long long)a0;
- (unsigned long long)getBufferedTime;
- (unsigned long long)getBufferLen;
- (id)getBufferEventDesc;
- (id)getBufferReportVal;
- (void).cxx_destruct;

@end
