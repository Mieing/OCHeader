@class NSString, NSArray;

@interface BDLGurdSyncResourcesTask : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSArray *channelsArray;
@property (copy, nonatomic) NSString *businessDomain;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (copy, nonatomic) NSString *resourceVersion;
@property (nonatomic) unsigned long long options;

+ (id)taskWithAccessKey:(id)a0 channels:(id)a1 businessDomain:(id)a2 completion:(id /* block */)a3;
+ (id)taskWithChannels:(id)a0 businessDomain:(id)a1 completion:(id /* block */)a2;

- (BOOL)forceRequest;
- (void).cxx_destruct;

@end
