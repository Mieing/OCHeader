@class NSString, NSDictionary;

@interface FindFriendRedDotReportInfo : MMObject <NSCopying>

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long exposeTimeMs;
@property (nonatomic) unsigned long long unexposeTimeMs;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
