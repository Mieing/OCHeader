@class BaseResponse, NSString, NSMutableArray, FinderGetUserResponse_QRCodeSource;

@interface FinderGetUserResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;
@property (retain, nonatomic) FinderGetUserResponse_QRCodeSource *qrcodeSource;
@property (retain, nonatomic) NSString *exportUsernameBuffer;

+ (void)initialize;

@end
