@class NSString, EcsInfoItem;

@interface RequestBulkBuyTask : NSObject

@property (copy, nonatomic) id /* block */ successCallback;
@property (copy, nonatomic) id /* block */ failedCallback;
@property (copy, nonatomic) EcsInfoItem *data;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long executeTime;

- (id)getKey;
- (void).cxx_destruct;

@end
