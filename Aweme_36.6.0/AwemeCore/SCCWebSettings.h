@class NSMutableArray;

@interface SCCWebSettings : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long maxWaitTime;
@property (nonatomic) long long maxReloadCount;
@property (retain, nonatomic) NSMutableArray *allowList;
@property (retain, nonatomic) NSMutableArray *denyDict;
@property (retain, nonatomic) NSMutableArray *allowListForJumpAPP;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
