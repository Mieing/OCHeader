@class BaseRequest, NSString, FinderContactExtRelationInfo, FinderBaseRequest;

@interface FinderUserPagePreviewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *posterFinderusername;
@property (retain, nonatomic) NSString *msProviderFinderusername;
@property (retain, nonatomic) FinderContactExtRelationInfo *relationInfo;

+ (void)initialize;

@end
