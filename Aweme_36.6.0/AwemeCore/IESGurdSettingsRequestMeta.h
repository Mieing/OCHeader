@class NSArray;

@interface IESGurdSettingsRequestMeta : NSObject

@property (nonatomic, getter=isRequestEnabled) BOOL requestEnabled;
@property (nonatomic) long long pollingInterval;
@property (copy, nonatomic) NSArray *accessKeysArray;

+ (id)metaWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
