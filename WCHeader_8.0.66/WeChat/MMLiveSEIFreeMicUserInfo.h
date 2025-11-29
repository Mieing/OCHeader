@class NSString;

@interface MMLiveSEIFreeMicUserInfo : NSObject

@property (retain, nonatomic) NSString *uId;
@property (nonatomic) unsigned int us;

- (void)updateWithMicUserInfo:(id)a0;
- (BOOL)isTalking;
- (void).cxx_destruct;

@end
