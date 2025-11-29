@class NSURL, NSString;

@interface AWEStudioMattingModel : NSObject

@property (retain, nonatomic) NSURL *fragmentURL;
@property (copy, nonatomic) NSString *fragmentPath;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } fragmentVideoTotalTime;
@property (copy, nonatomic) NSString *mattingOutPutPath;
@property (copy, nonatomic) NSString *aiModelPath;
@property (copy, nonatomic) NSString *mattingType;
@property (copy, nonatomic) NSString *chroma;

- (void).cxx_destruct;

@end
