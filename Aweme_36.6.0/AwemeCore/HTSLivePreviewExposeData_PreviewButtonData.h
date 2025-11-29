@class NSString;

@interface HTSLivePreviewExposeData_PreviewButtonData : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long lotteryId;

+ (id)descriptor;

@end
