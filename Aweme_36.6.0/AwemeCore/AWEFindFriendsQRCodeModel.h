@class UIImage, NSString;

@interface AWEFindFriendsQRCodeModel : NSObject

@property (retain, nonatomic) UIImage *qrCodeImage;
@property (nonatomic) long long qrCodeStatus;
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) NSString *idLabelText;
@property (copy, nonatomic) id /* block */ copyIDBlock;
@property (copy, nonatomic) id /* block */ retryFetchBlock;

- (void).cxx_destruct;

@end
