@class HTSLiveUpIcon;

@interface HTSLiveFilterSwitchChangeData : IESLivePBBaseMessage

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) HTSLiveUpIcon *upIcon;
@property (nonatomic) BOOL hasUpIcon;

+ (id)descriptor;

@end
