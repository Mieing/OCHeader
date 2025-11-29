@class NSString, NSDictionary;

@interface IESLatchAttachState : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
