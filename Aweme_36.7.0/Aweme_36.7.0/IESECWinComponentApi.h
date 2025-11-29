@class NSString, NSDictionary;

@interface IESECWinComponentApi : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (copy, nonatomic) NSString *extraSchema;
@property (retain, nonatomic) NSDictionary *actionPramas;

- (void)fetchWindowComponentIsPrefetch:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
