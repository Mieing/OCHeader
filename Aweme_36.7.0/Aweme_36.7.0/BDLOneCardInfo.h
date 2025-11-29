@class NSString;

@interface BDLOneCardInfo : NSObject

@property (retain) NSString *resourceID;
@property long long resourceType;
@property (retain) NSString *version;
@property (retain) NSString *developer_id;
@property (copy, nonatomic) NSString *customID;

- (void).cxx_destruct;

@end
