@class NSString, HTSLiveTitleIcon;

@interface HTSLiveRoomTitle : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *introduction;
@property (nonatomic) long long leftTag;
@property (copy, nonatomic) NSString *leftPeriod;
@property (copy, nonatomic) NSString *leftToast;
@property (retain, nonatomic) HTSLiveTitleIcon *leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
@property (nonatomic) int uiType;
@property (nonatomic) BOOL portraitShow;
@property (nonatomic) BOOL landscapeShow;

+ (id)descriptor;

@end
