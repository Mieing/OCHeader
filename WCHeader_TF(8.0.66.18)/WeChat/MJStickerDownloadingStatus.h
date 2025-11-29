@class NSArray;

@interface MJStickerDownloadingStatus : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSArray *progressCallback;
@property (copy, nonatomic) NSArray *completionCallback;

- (void).cxx_destruct;

@end
