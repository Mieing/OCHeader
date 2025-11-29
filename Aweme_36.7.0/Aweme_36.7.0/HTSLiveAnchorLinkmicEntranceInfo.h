@class NSString, HTSLiveImage, GPBInt64ObjectDictionary;

@interface HTSLiveAnchorLinkmicEntranceInfo : IESLivePBBaseMessage

@property (nonatomic) int panelType;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *pkToLinkmicImage;
@property (nonatomic) BOOL hasPkToLinkmicImage;
@property (retain, nonatomic) HTSLiveImage *linkmicToPkImage;
@property (nonatomic) BOOL hasLinkmicToPkImage;
@property (retain, nonatomic) HTSLiveImage *leadPkImage;
@property (nonatomic) BOOL hasLeadPkImage;
@property (copy, nonatomic) NSString *leadPkFreqKey;
@property (retain, nonatomic) HTSLiveImage *pkIcon;
@property (nonatomic) BOOL hasPkIcon;
@property (retain, nonatomic) HTSLiveImage *anchorIcon;
@property (nonatomic) BOOL hasAnchorIcon;
@property (copy, nonatomic) NSString *wordType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *buttonLead;
@property (readonly, nonatomic) unsigned long long buttonLead_Count;

+ (id)descriptor;

@end
