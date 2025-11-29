@class HTSLiveOpenActivityData;

@interface HTSLiveOpenContentData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveOpenActivityData *openActivityData;
@property (nonatomic) BOOL hasOpenActivityData;

+ (id)descriptor;

@end
