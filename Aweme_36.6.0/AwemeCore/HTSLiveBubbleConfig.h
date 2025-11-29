@class HTSLiveText, NSString, HTSLiveFlexImageStruct, HTSLiveImage;

@interface HTSLiveBubbleConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long duration;
@property (retain, nonatomic) HTSLiveText *richText;
@property (nonatomic) BOOL hasRichText;
@property (copy, nonatomic) NSString *schemeURL;
@property (retain, nonatomic) HTSLiveFlexImageStruct *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) HTSLiveImage *arrowImage;
@property (nonatomic) BOOL hasArrowImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) HTSLiveImage *landingIcon;
@property (nonatomic) BOOL hasLandingIcon;

+ (id)descriptor;

@end
