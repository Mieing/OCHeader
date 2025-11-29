@class NSString;

@interface HTSLivePreviewExposeData_PreviewButtonData : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long lotteryId;
@property (nonatomic) long long boxId;
@property (nonatomic) int buttonPriority;
@property (copy, nonatomic) NSString *enterSchema;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
