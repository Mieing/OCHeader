@class NSString;

@interface EnterReportInfo : MMObject <NSCopying>

@property (nonatomic) unsigned long long enterTimeMs;
@property (retain, nonatomic) NSString *topVcName;
@property (nonatomic) unsigned long long topVcPageId;
@property (retain, nonatomic) NSString *lastClickShellKey;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
