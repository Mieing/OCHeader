@class NSString, IamBizFastloadPageData;

@interface IamBizFastloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *templateFilePath;
@property (nonatomic) unsigned int templateType;
@property (retain, nonatomic) NSString *templateFullVersion;
@property (retain, nonatomic) IamBizFastloadPageData *pageData;

+ (void)initialize;

@end
