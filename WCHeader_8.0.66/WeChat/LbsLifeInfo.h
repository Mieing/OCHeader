@class NSString, NSMutableArray;

@interface LbsLifeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *exposeList;
@property (retain, nonatomic) NSString *entranceTipsId;
@property (retain, nonatomic) NSMutableArray *waitForPrefetchList;
@property (nonatomic) BOOL hasLbsAuth;

+ (void)initialize;

@end
