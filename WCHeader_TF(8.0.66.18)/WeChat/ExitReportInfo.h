@class NSString;

@interface ExitReportInfo : MMObject <NSCopying>

@property (nonatomic) unsigned long long exitTimeMs;
@property (retain, nonatomic) NSString *topVcName;
@property (nonatomic) unsigned long long topVcPageId;
@property (retain, nonatomic) NSString *clickShellKey;
@property (nonatomic) unsigned long long entrySwitch;
@property (nonatomic) unsigned long long reddotEnabled;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
