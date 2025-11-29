@class NSString;

@interface EcMetaItem : NSObject

@property (copy, nonatomic) NSString *preview360Url;
@property (copy, nonatomic) NSString *preview720Url;
@property (copy, nonatomic) NSString *preview1080Url;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long duration;

- (void).cxx_destruct;

@end
