@class NSString, NSMutableArray;

@interface UserCertInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showCrtInfo;
@property (nonatomic) unsigned int isCrtInstall;
@property (retain, nonatomic) NSString *crtEntryTitle;
@property (retain, nonatomic) NSString *crtEntryDesc;
@property (retain, nonatomic) NSString *crtStatusName;
@property (retain, nonatomic) NSString *crtItemLogoUrl;
@property (retain, nonatomic) NSMutableArray *crtList;

+ (void)initialize;

@end
