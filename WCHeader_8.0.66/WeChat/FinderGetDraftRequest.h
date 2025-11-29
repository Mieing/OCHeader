@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetDraftRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *sectionBuffer;

+ (void)initialize;

@end
