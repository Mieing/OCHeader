@class NSString, NSArray;

@interface AWEIMRedPacketUploadContext : NSObject

@property (copy, nonatomic) NSString *uploadId;
@property (copy, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSArray *imageDataArray;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) long long fileType;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
