@class NSString;

@interface CGPBusinessScreenshotPod : GPBMessage

@property (nonatomic) int result;
@property (copy, nonatomic) NSString *sequence;
@property (copy, nonatomic) NSString *savePath;

+ (id)descriptor;

@end
