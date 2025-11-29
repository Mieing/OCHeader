@class NSString;

@interface DownloadHeadImageRequest : NSObject

@property (nonatomic) unsigned int requestCount;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned char category;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL isUseWxpc;

- (id)init;
- (void).cxx_destruct;

@end
