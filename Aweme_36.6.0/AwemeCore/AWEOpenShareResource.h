@class NSString;

@interface AWEOpenShareResource : NSObject

@property (nonatomic) unsigned long long resourceFromType;
@property (nonatomic) unsigned long long resourceMediaType;
@property (nonatomic) BOOL shouldWebResourceDownload;
@property (nonatomic) BOOL isWebResourceDownloaded;
@property (retain, nonatomic) NSString *webSourceURL;
@property (retain, nonatomic) NSString *localSourceURL;

- (void).cxx_destruct;

@end
