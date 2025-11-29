@class NSString;

@interface CGPBusinessShakePod : GPBMessage

@property (nonatomic) int result;
@property (copy, nonatomic) NSString *message;

+ (id)descriptor;

@end
