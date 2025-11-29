@class NSString, AWEURLModel;

@interface AWEMediaDownloadInfo : NSObject

@property (retain, nonatomic) AWEURLModel *downloadURL;
@property (nonatomic) double estimatedFileSize;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void).cxx_destruct;

@end
