@class FinderCmdItem, BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderUtilsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int musicSid;
@property (nonatomic) unsigned int articleScene;
@property (retain, nonatomic) FinderCmdItem *cmdItem;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
