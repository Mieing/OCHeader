@class NSString;

@interface AffRoamTaskErrorList_AffRoamTaskErrorLog : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *convId;
@property (nonatomic) unsigned long long time;
@property (nonatomic) int type;
@property (nonatomic) int subType;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *detail;

+ (void)initialize;

@end
