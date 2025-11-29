@class NSString, IESLiveChorusInfo;

@interface HTSLiveCloseChorusContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusInfo *chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (copy, nonatomic) NSString *closeUserId;
@property (copy, nonatomic) NSString *closeToast;
@property (nonatomic) int closeReason;

+ (id)descriptor;

@end
