@class NSString;

@interface IESLiveGameOpenPlatformNotification : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;
@property (nonatomic) double expiredDate;
@property (retain, nonatomic) id message;

+ (id)notificationWithMessage:(id)a0;
+ (id)name;
+ (Class)messageClass;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (id)initWithMessage:(id)a0;

@end
