@class NSString, NSArray;

@interface IESECWinProductRefreshApi : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSArray *refreshParams;
@property (copy, nonatomic) NSString *passThroughAPI;

- (void)fetchWindowProductRefreshDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
