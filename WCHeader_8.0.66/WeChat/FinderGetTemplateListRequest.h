@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetTemplateListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *sectionBuffer;

+ (void)initialize;

@end
