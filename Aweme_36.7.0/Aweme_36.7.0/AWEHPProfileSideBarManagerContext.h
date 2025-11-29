@class NSString;

@interface AWEHPProfileSideBarManagerContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entranceStatus;
@property (nonatomic) double enterTime;
@property (nonatomic) long long clickOrder;
@property (nonatomic) BOOL hasSlide;

- (id)initWithEnterMethod:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
