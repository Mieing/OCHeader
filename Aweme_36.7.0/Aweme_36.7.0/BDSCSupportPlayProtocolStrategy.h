@class NSDictionary, NSString;

@interface BDSCSupportPlayProtocolStrategy : NSObject

@property (copy, nonatomic) NSDictionary *tvInfo;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long supportPlayProtocolType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
