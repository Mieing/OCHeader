@class NSString;

@interface BuildRelationSessionParm : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *ilinkappid;
@property (nonatomic) unsigned int type;
@property (nonatomic) int errorCode;

+ (void)initialize;

@end
