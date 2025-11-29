@class NSString, NSDictionary;

@interface BDECRabbiFlyAction : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *from;

- (id)initWithType:(id)a0 data:(id)a1 from:(id)a2;
- (void).cxx_destruct;

@end
