@class NSString, NSArray, AWESingleStickerDownloadResult;

@interface AWESingleStickerDownloadInfo : NSObject

@property (copy, nonatomic) NSString *effectIdentifier;
@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (copy, nonatomic) NSString *stickerUrl;
@property (nonatomic) long long duration;
@property (retain, nonatomic) AWESingleStickerDownloadResult *result;

- (void).cxx_destruct;

@end
