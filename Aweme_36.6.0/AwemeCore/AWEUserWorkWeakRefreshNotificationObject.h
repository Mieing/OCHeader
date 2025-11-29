@class NSDictionary;

@interface AWEUserWorkWeakRefreshNotificationObject : NSObject

@property (retain, nonatomic) NSDictionary *awemeModelDict;
@property (copy, nonatomic) id /* block */ weakRefreshCompleteBlock;

- (void).cxx_destruct;

@end
