@class NSString;

@interface PayFunctionCell : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *funcId;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *funcName;
@property (retain, nonatomic) NSString *funcIconUrl;
@property (retain, nonatomic) NSString *funcExtDesc;
@property (nonatomic) unsigned int funcType;
@property (retain, nonatomic) NSString *funcTypeName;
@property (retain, nonatomic) NSString *funcIconUrlDark;

+ (void)initialize;

@end
