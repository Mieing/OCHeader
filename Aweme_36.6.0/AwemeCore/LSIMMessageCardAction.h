@class NSString;

@interface LSIMMessageCardAction : NSObject

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *actionType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
