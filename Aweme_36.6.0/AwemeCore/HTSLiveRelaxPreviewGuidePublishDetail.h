@class NSString;

@interface HTSLiveRelaxPreviewGuidePublishDetail : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *itemSchema;
@property (nonatomic) BOOL banned;
@property (copy, nonatomic) NSString *bannedToast;

+ (id)descriptor;

@end
