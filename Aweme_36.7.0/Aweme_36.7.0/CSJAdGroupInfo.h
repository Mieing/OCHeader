@class NSString;

@interface CSJAdGroupInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *group_tag;
@property (copy, nonatomic) NSString *card_tag;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
