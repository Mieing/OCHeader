@class NSString, HTSLiveImage;

@interface HTSLiveBarrageConfigure : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *logo;
@property (nonatomic) BOOL hasLogo;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *atomsBgcolor;
@property (copy, nonatomic) NSString *atomsFrame;
@property (copy, nonatomic) NSString *atomsText;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) HTSLiveImage *jumpIcon;
@property (nonatomic) BOOL hasJumpIcon;

+ (id)descriptor;

@end
