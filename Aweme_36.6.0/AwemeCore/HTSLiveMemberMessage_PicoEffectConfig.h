@class HTSLiveText, NSMutableDictionary, NSString, HTSLiveImage;

@interface HTSLiveMemberMessage_PicoEffectConfig : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) HTSLiveImage *textIcon;
@property (nonatomic) BOOL hasTextIcon;
@property (nonatomic) int stayTime;
@property (retain, nonatomic) HTSLiveImage *badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) long long centerAnimAssetId;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (copy, nonatomic) NSString *dressId;

+ (id)descriptor;

@end
