@class WCMediaItem, NSString, UIImage;

@interface DownloadMediaWrap : NSObject {
    NSString *downloadID;
    NSString *downloadMd5;
}

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (nonatomic) long long downloadType;
@property (readonly, nonatomic) NSString *downloadID;
@property (readonly, nonatomic) NSString *downloadMd5;
@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) UIImage *resultImage;
@property (nonatomic) long long requestType;

+ (id)getDownloadID:(id)a0 downloadType:(long long)a1;

- (id)initWithMediaItem:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end
