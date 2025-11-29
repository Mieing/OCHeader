@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderCatelogStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int tabType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *extBuff;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
