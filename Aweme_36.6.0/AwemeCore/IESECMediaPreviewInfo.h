@class NSString, IESECVideoInfo;

@interface IESECMediaPreviewInfo : NSObject

@property (nonatomic) unsigned long long previewType;
@property (copy, nonatomic) NSString *imagePreviewURL;
@property (retain, nonatomic) IESECVideoInfo *videoInfo;

- (void).cxx_destruct;

@end
