@class NSString, NSDictionary;

@interface AWEIMMangoShareOutShareActivityInfo : NSObject

@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSString *activityID;
@property (readonly, copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithActivityType:(id)a0 activityID:(id)a1 schema:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
