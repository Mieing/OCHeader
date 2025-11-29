@class NSString;

@interface HTSLiveOpenGame : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long anchorType;
@property (nonatomic) long long interactType;

+ (id)descriptor;

@end
