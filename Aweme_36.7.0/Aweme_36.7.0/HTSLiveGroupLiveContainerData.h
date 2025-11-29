@class NSString;

@interface HTSLiveGroupLiveContainerData : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *containerPayload;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *foldURL;
@property (copy, nonatomic) NSString *horizontalURL;
@property (nonatomic) BOOL isFlowMode;
@property (nonatomic) BOOL canAdjustPosition;
@property (nonatomic) BOOL isLiteMode;
@property (nonatomic) BOOL isHorizontal;
@property (copy, nonatomic) NSString *URLWeb;
@property (copy, nonatomic) NSString *horizontalURLWeb;
@property (copy, nonatomic) NSString *previewURL;

+ (id)descriptor;

@end
