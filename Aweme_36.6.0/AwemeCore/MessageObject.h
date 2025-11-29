@class NSString;

@interface MessageObject : NSObject

@property unsigned int msgid;
@property long long arg1;
@property long long arg2;
@property (retain, nonatomic) NSString *arg3;

- (void).cxx_destruct;

@end
