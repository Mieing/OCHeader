@class NSString, EmoticonVideoConverter;

@interface EmoticonCreateVideoUploadTask : EmoticonCreateUploadTask

@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) EmoticonVideoConverter *videoConverter;
@property (copy, nonatomic) id /* block */ convertStartBlock;
@property (copy, nonatomic) id /* block */ convertFailBlock;
@property (copy, nonatomic) id /* block */ convertSucBlock;

- (id)init;
- (id)initWithVideoPath:(id)a0;
- (void)startUpload;
- (void)convertVideoToWxam:(id)a0;
- (void).cxx_destruct;

@end
