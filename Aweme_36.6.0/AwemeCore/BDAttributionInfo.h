@class NSArray, NSDictionary;

@interface BDAttributionInfo : NSObject

@property (copy, nonatomic) NSArray *bizMeta;
@property (copy, nonatomic) NSArray *alogMeta;
@property (copy, nonatomic) NSDictionary *alogLostRecords;
@property (copy, nonatomic) NSDictionary *fileRecords;
@property (copy, nonatomic) NSDictionary *alogConfig;

- (void).cxx_destruct;

@end
