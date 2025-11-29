@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetMemberDraftRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int objectType;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
