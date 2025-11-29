@class NSString, StatusInfo;

@interface StatusItemIconDescDataReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) StatusInfo *statusInfo;

+ (void)initialize;

@end
