@class NSString;

@interface StartAppResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *startId;
@property (nonatomic) int pushStreamType;
@property (copy, nonatomic) NSString *streamId;

+ (id)descriptor;

@end
