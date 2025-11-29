@class BaseRequest, NSString, NSMutableArray;

@interface CheckTmplVerReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) NSMutableArray *typeInfoList;

+ (void)initialize;

- (void)setTypeInfoList:(id)a0;
- (id)typeInfoList;
- (void)setNetType:(id)a0;
- (id)netType;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
