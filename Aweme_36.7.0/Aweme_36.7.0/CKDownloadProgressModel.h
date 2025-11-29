@class DownloadProgressInfo;

@interface CKDownloadProgressModel : NSObject

@property (retain, nonatomic) DownloadProgressInfo *progressInfo;
@property (nonatomic) double onlyProgressValue;

+ (id)initWithProgressInfo:(id)a0;

- (void).cxx_destruct;

@end
