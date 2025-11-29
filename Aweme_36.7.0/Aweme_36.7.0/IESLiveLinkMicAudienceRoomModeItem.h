@class NSString, HTSLiveImage;

@interface IESLiveLinkMicAudienceRoomModeItem : IESLivePBBaseMessage

@property (nonatomic) int interactType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
