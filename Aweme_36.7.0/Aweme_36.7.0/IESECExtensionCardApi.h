@class NSString;
@protocol IESECHTTPRequestTask;

@interface IESECExtensionCardApi : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *extensionCardParams;
@property (weak, nonatomic) id<IESECHTTPRequestTask> requestTask;

- (void)fetchExtensionCardWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
