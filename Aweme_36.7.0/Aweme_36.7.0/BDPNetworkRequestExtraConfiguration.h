@class NSString, NSDictionary, NSURL;

@interface BDPNetworkRequestExtraConfiguration : NSObject

@property (nonatomic) long long flags;
@property (nonatomic) long long type;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSString *methodStr;
@property (retain, nonatomic) Class bdpRequestSerializerClass;
@property (copy, nonatomic) NSDictionary *bdpRequestHeaderField;
@property (copy, nonatomic) id /* block */ constructingBodyBlock;
@property (nonatomic) id *progress;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ downloadHeaderCallback;
@property (copy, nonatomic) id /* block */ downloadDataCallback;
@property (copy, nonatomic) id /* block */ redirectCallback;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestedLength;
@property (retain, nonatomic) NSURL *downloadDestinationURL;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) unsigned long long tagType;

+ (id)defaultConfigWithHttpMethod:(long long)a0;
+ (id)defaultBDPSerializerConfig;
+ (id)defaultBDPSerializerConfigWithHttpMethod:(long long)a0;
+ (id)defaultConfig;

- (void).cxx_destruct;

@end
