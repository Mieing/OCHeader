@class NSString, BDPUniqueID, NSDictionary;

@interface BDPAnchorData_HG : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iconURI;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *absoluteString;
@property (copy, nonatomic) NSDictionary *queryDictionary;
@property (copy, nonatomic) NSString *schema;

- (void).cxx_destruct;

@end
