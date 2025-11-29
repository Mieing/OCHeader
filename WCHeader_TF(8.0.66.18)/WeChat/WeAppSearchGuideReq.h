@class BaseRequest, NSString, NSMutableArray;

@interface WeAppSearchGuideReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (retain, nonatomic) NSString *nettype;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *extReqParams;

+ (void)initialize;

@end
