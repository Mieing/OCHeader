@class NSString;

@interface IESLiveChorusMixStreamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *stream;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isMixStreamToCdn;

+ (id)descriptor;

@end
