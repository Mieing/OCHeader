@class NSString;

@interface H5VideoPlayInfo : MMObject

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *fileID;
@property (nonatomic) long long fileSize;
@property (nonatomic) int fileType;
@property (nonatomic) int fileDuration;
@property (nonatomic) int playID;

- (void).cxx_destruct;

@end
