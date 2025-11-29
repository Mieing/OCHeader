@class NSString, NSDictionary, NSURL, AWEAwemeModel, NSArray;

@interface AWEMediaDownloadOptions : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long downloadType;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL shouldMuteVideo;
@property (nonatomic) BOOL needsSaveToAlbum;
@property (nonatomic) BOOL needsAssetAfterDownload;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *feedPlayMode;
@property (copy, nonatomic) NSDictionary *extraLogInfo;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sharePlatform;
@property (nonatomic) BOOL awemeIsLongItem;
@property (nonatomic) BOOL shouldShowLoading;
@property (nonatomic) BOOL notBlockOperation;
@property (copy, nonatomic) NSArray *indicesToDownload;
@property (nonatomic) BOOL isPopupPanelDownload;

- (void).cxx_destruct;
- (id)init;

@end
