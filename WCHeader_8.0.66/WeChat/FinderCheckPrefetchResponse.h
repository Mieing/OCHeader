@class NSData, FinderCheckPrefetchConfig, NSMutableArray, BaseResponse;

@interface FinderCheckPrefetchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *checkResult;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) FinderCheckPrefetchConfig *checkConfig;
@property (retain, nonatomic) NSData *lastCheckContext;

+ (void)initialize;

@end
