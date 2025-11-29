@class NSString;

@interface FavoritesDownloadCDNInfo : NSObject

@property (nonatomic) unsigned int localItemId;
@property (retain, nonatomic) NSString *favItemChectId;
@property (retain, nonatomic) NSString *localDataID;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *cdnKey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *head256Md5;
@property (nonatomic) BOOL isThumb;
@property (nonatomic) int dataType;
@property (retain, nonatomic) NSString *dataFmt;
@property (retain, nonatomic) NSString *streamWebUrl;

+ (id)CreatFavDownloadCDNInfoForData:(id)a0 inFavItem:(id)a1 isThumb:(BOOL)a2;

- (void).cxx_destruct;

@end
