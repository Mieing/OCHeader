@class NSString, NSMutableArray;

@interface RequestProductCardTask : NSObject

@property (copy, nonatomic) id /* block */ successCallback;
@property (copy, nonatomic) id /* block */ failedCallback;
@property (nonatomic) unsigned int reqType;
@property (copy, nonatomic) NSMutableArray *products;
@property (nonatomic) BOOL ignoreCache;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long executeTime;

- (id)getKey;
- (void).cxx_destruct;

@end
