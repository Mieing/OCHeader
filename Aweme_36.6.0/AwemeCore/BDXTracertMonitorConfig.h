@class NSString, NSDictionary;

@interface BDXTracertMonitorConfig : NSObject

@property (copy, nonatomic) NSString *tracertID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *containerVersion;
@property (copy, nonatomic) NSDictionary *commonCategory;

- (void).cxx_destruct;

@end
