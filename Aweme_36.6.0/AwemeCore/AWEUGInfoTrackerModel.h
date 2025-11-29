@class NSString;

@interface AWEUGInfoTrackerModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long phase;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *gdLabelUgInfo;
@property (copy, nonatomic) NSString *ugInfo;
@property (copy, nonatomic) NSString *gdLabelInsertJson;
@property (copy, nonatomic) NSString *insertJson;
@property (copy, nonatomic) NSString *source_gid;
@property (copy, nonatomic) NSString *source_gids;
@property (copy, nonatomic) NSString *gids;
@property (nonatomic) long long feedCount;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
