@class NSString, NSData;

@interface QRCodeOAuthData : MMObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appDesc;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSData *qrCodeData;
@property (nonatomic) unsigned int lpTimeout;
@property (nonatomic) unsigned int lpInterval;

- (id)description;
- (void).cxx_destruct;

@end
