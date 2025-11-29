@class NSString;

@interface IESECWinAuthorInfoApi : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (nonatomic) int tabType;

- (void)fetchWindowHeaderWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
