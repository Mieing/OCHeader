@class NSString, NSArray;

@interface BDARFeedbackModel : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *reasonId;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) unsigned long long modelType;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSArray *subList;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
