@class HTSLiveText;

@interface HTSLiveProfileViewData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) HTSLiveText *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) long long showDuration;
@property (nonatomic) int source;

+ (id)descriptor;

@end
