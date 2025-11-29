@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderOplogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *cmdList;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int opScene;
@property (retain, nonatomic) NSString *opUsername;

+ (void)initialize;

@end
