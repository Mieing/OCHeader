@class NSString;

@interface SetRoomAuthResponse : IESLivePBBaseMessage

@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMessage;

+ (id)descriptor;

@end
