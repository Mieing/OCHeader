@class NSString, HTSLiveImage;

@interface PasterItem : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL isOnlive;

+ (id)descriptor;

@end
