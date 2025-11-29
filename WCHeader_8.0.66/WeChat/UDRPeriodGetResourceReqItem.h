@class NSString, NSMutableArray;

@interface UDRPeriodGetResourceReqItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSMutableArray *localResources;
@property (retain, nonatomic) NSMutableArray *projectParameters;

+ (void)initialize;

@end
