@class NSNumber, NSString, NSDictionary;

@interface BUCloudCommandModel : NSObject

@property (retain, nonatomic) NSNumber *commandId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
