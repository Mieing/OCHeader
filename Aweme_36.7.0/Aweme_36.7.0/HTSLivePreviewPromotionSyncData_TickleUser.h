@class NSString, HTSLiveImage;

@interface HTSLivePreviewPromotionSyncData_TickleUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *previewReachText;

+ (id)descriptor;

@end
