@class NSString;

@interface AudioRecorderUserData : NSObject <NSCopying>

@property (retain) NSString *fromusr;
@property (retain) NSString *tousr;
@property (retain) NSString *chatname;
@property (copy) NSString *msgSource;
@property long long voiceFormat;
@property unsigned int createtime;
@property unsigned int audioid;
@property unsigned int duration;
@property unsigned int inputId;
@property unsigned int errorCode;
@property BOOL receiveEndFlag;
@property unsigned int receiveDataLength;
@property BOOL isSetInputPortWithBuiltInMic;
@property (nonatomic) BOOL isInputPortReseted;
@property unsigned long long touchBeginTimestamp;
@property unsigned long long requestRecordPermissionCallbackTimestamp;
@property unsigned long long recordStartTimestamp;
@property unsigned long long prepareQueueTimestamp;
@property unsigned long long audioQueueNewTimestamp;
@property unsigned long long audioQueueInitTimestamp;
@property unsigned long long audioSessionActiveTimestamp;
@property unsigned long long inputDeviceSelectedTimestamp;
@property unsigned long long recordBeginTimestamp;
@property unsigned long long audioQueueStartedTimestamp;
@property unsigned long long receiveFirstPCMTimestamp;
@property (nonatomic) BOOL bCancelUpload;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
