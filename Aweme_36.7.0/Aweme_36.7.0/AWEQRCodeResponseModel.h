@class UIImage, NSArray, NSError;

@interface AWEQRCodeResponseModel : NSObject

@property (retain, nonatomic) UIImage *qrCodeImage;
@property (copy, nonatomic) NSArray *qrCodeUrlList;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSError *qrCodeError;
@property (retain, nonatomic) NSError *avatarError;
@property (nonatomic) long long expireTimeInSecond;

- (void).cxx_destruct;

@end
