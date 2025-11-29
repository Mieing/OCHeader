@class NSString;

@interface KryptonVECameraMessage : NSObject

@property (nonatomic) long long msgID;
@property (nonatomic) long long arg1;
@property (nonatomic) long long arg2;
@property (copy, nonatomic) NSString *arg3;

- (void).cxx_destruct;

@end
