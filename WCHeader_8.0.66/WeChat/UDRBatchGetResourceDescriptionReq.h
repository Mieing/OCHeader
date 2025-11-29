@class NSMutableArray;

@interface UDRBatchGetResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *projectList;
@property (retain, nonatomic) NSMutableArray *appParameters;

+ (void)initialize;

@end
