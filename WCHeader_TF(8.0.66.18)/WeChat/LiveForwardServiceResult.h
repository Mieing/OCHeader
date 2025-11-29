@class LiveForwardResultCodeBox, NSString, NSArray;

@interface LiveForwardServiceResult : NSObject

@property (retain, nonatomic) LiveForwardResultCodeBox *code;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *toUsernames;

+ (id)makeWithCode:(id)a0 message:(id)a1 toUsernames:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
