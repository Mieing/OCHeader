@class NSString, NSDictionary, NSArray;

@interface BDARVTrackerModel : NSObject

@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSArray *trackURLs;

- (id)initWithADID:(id)a0 logExtra:(id)a1;
- (void).cxx_destruct;

@end
