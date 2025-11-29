@class NSString, NSMutableDictionary;

@interface APBResponse : NSObject

@property (nonatomic) int resultType;
@property (copy, nonatomic) NSString *failReason;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableDictionary *successResult;
@property (copy, nonatomic) NSString *retCodeSub;
@property (copy, nonatomic) NSString *retMessageSub;

- (id)initWithResultType:(int)a0 failReason:(id)a1 token:(id)a2 successResult:(id)a3;
- (id)initWithResultType:(int)a0 failReason:(id)a1 token:(id)a2 retCodeSub:(id)a3 retMessageSub:(id)a4 successResult:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
