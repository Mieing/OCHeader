@class NSString, NSMutableArray;

@interface CheckTmplVerReq_TypeInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableArray *fullVersions;
@property (retain, nonatomic) NSString *fullVersionInUse;
@property (nonatomic) unsigned long long controlFlag;

+ (void)initialize;

@end
