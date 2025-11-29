@class NSString;

@interface AWETeenQualityDescription : NSObject

@property (nonatomic) long long errorTypeValue;
@property (nonatomic) long long descriptionCodeValue;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *descriptionTypeValue;
@property (nonatomic) long long triggerType;
@property (nonatomic) long long cancleType;
@property (copy, nonatomic) NSString *cancleMsg;

- (void).cxx_destruct;

@end
