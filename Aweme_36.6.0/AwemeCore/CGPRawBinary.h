@class NSData;

@interface CGPRawBinary : GPBMessage

@property (copy, nonatomic) NSData *bin;

+ (id)descriptor;

@end
