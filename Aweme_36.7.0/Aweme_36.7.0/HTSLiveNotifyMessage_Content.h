@class NSString;

@interface HTSLiveNotifyMessage_Content : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL needHighLight;

+ (id)descriptor;

@end
