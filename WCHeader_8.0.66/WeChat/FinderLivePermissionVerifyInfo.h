@class NSString;

@interface FinderLivePermissionVerifyInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int verifyType;
@property (retain, nonatomic) NSString *wxaAppid;
@property (nonatomic) unsigned int bizId;
@property (retain, nonatomic) NSString *verifyBuffer;

+ (void)initialize;

@end
