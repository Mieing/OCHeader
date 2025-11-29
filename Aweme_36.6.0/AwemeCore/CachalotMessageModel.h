@class NSString, NSDictionary;

@interface CachalotMessageModel : NSObject

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSDictionary *messageParams;

- (void).cxx_destruct;

@end
