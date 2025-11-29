@class NSString, NSData;

@interface SwitchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *switchId;
@property (nonatomic) BOOL enableSwitch;
@property (retain, nonatomic) NSString *switchDesc;
@property (retain, nonatomic) NSData *switchExtInfo;

+ (void)initialize;

@end
