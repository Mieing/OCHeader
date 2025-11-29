@class NSString, NSMutableArray;

@interface TorchCert : WXPBGeneratedMessage

@property (nonatomic) unsigned long long certId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSString *fromNickname;
@property (retain, nonatomic) NSString *fromIcon;
@property (nonatomic) unsigned long long sportStep;
@property (nonatomic) BOOL isLightTorch;
@property (nonatomic) BOOL isJoinRunWith;
@property (nonatomic) BOOL isAccessLocation;
@property (nonatomic) BOOL isShowSportStep;
@property (nonatomic) BOOL isBanned;

+ (void)initialize;

@end
