@class NSString, FinderPresentAttendInfo;

@interface FinderPresentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int attendDuration;
@property (retain, nonatomic) FinderPresentAttendInfo *attendInfo;
@property (nonatomic) unsigned long long settingFlag;
@property (nonatomic) unsigned int panelItemId;
@property (retain, nonatomic) NSString *lastGiftId;

+ (void)initialize;

@end
