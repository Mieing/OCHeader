@class NSString, NSDictionary, NSDate;

@interface AWEIMActionRecord : NSObject <NSCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *conversationShortID;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (nonatomic) long long lifeCycle;
@property (retain, nonatomic) NSDate *generatedTime;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *ext;

- (void)updateSchema:(id)a0;
- (id)initWithIdentifier:(id)a0 covnersationShortID:(id)a1 type:(long long)a2;
- (void)updateExt:(id)a0;
- (void)updateGeneratedTime:(id)a0;
- (void)updateLifeCycle:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updatePriority:(long long)a0;

@end
