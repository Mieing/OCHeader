@class NSString, NSMutableDictionary;

@interface APBTaskContext : NSObject

@property (nonatomic) int state;
@property (nonatomic) int resultCode;
@property (copy, nonatomic) NSString *failReason;
@property (retain, nonatomic) NSMutableDictionary *successResult;
@property (retain, nonatomic) NSString *retCodeSub;
@property (retain, nonatomic) NSString *retMessageSub;

- (void).cxx_destruct;
- (id)init;

@end
