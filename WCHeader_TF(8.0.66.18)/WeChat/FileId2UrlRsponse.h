@class NSString, NSMutableArray;

@interface FileId2UrlRsponse : WXPBGeneratedMessage

@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int num;
@property (retain, nonatomic) NSMutableArray *fileid2UrlInfoList;

+ (void)initialize;

@end
