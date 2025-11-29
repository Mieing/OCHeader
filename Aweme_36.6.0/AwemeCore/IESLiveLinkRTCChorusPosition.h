@class NSString, ByteRTCPosition;

@interface IESLiveLinkRTCChorusPosition : NSObject

@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *strUID;
@property (retain, nonatomic) ByteRTCPosition *position;

- (void).cxx_destruct;

@end
