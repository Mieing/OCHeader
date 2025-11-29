@class NSString;

@interface CGPBusinessFocusWindowClient : GPBMessage

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long sequence;

+ (id)descriptor;

@end
