@class NSError, NSString;

@interface AWESingleStickerDownloadResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) BOOL failed;

- (void).cxx_destruct;

@end
