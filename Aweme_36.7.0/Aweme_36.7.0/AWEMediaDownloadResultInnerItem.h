@class NSURL, NSNumber, NSString;

@interface AWEMediaDownloadResultInnerItem : AWEMediaDownloadResultItem

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSURL *livePhotoImageFileURL;
@property (retain, nonatomic) NSURL *downloadResponseURL;
@property (retain, nonatomic) NSNumber *downloadHttpCode;
@property (nonatomic) double downloadStartTime;
@property (nonatomic) double watermarkStartTime;
@property (copy, nonatomic) NSString *downloadUUID;
@property (nonatomic) BOOL hasUploadCache;
@property (nonatomic) BOOL hasPlayerCache;

- (void).cxx_destruct;

@end
