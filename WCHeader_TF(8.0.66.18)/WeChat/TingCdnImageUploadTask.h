@class NSString;

@interface TingCdnImageUploadTask : NSObject

@property (retain, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *uploadLocalImageURL;
@property (nonatomic) BOOL startCdnUpload;
@property (nonatomic) BOOL uploadCDNSuccessful;
@property (nonatomic) int retCode;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *coverMd5;

- (void).cxx_destruct;

@end
