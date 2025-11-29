@class NSString, NSDictionary, LMTNodeStyleModel;

@interface LMTNodeModel : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) LMTNodeStyleModel *style;
@property (nonatomic) long long transparent_pass;
@property (copy, nonatomic) NSString *preload;

- (void).cxx_destruct;

@end
