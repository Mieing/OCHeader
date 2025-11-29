@class NSString, HTSLiveImage;

@interface IESLiveOpenGameConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appExtra;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (copy, nonatomic) NSString *gameTitle;

+ (id)descriptor;

@end
