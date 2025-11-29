@class NSString, NSError, AWEIMUploadFileResponse;

@interface AWEIMMessageAttachmentUploadViewModel : NSObject

@property (nonatomic) long long duration;
@property (nonatomic) BOOL canceled;
@property (copy, nonatomic) NSString *fileID;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ onFinish;
@property (readonly, nonatomic) NSString *vmID;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEIMUploadFileResponse *response;

- (void).cxx_destruct;

@end
