@class FinderBaseRequest, NSString, NSMutableArray;

@interface FinderFuncMsgBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *clientAiInfo;
@property (nonatomic) unsigned int num;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
