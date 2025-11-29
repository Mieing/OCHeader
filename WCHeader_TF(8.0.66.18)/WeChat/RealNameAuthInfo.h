@class NSString, NSMutableArray;

@interface RealNameAuthInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *applyInfo;
@property (retain, nonatomic) NSString *protocolUrl;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
