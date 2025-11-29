@class NSString, HTSLiveImage;

@interface IESLiveGuestTaskBanner : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) long long totalTask;
@property (nonatomic) long long doneTask;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
