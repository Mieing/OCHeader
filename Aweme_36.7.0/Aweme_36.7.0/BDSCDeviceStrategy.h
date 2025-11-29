@class NSString;

@interface BDSCDeviceStrategy : NSObject

@property (copy, nonatomic) NSString *recommendRegex;
@property (copy, nonatomic) NSString *mapName;
@property (nonatomic) long long showPriority;
@property (nonatomic) long long sourceApp;
@property (readonly, nonatomic) BOOL isRecommend;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
