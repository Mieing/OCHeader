@class NSString, NSData;

@interface BDARifleResource : NSObject <BDARifleResourceProtocol>

@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *absolutePath;
@property (copy, nonatomic) NSData *resourceData;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *originSourceURL;
@property (nonatomic) BOOL isGeckoUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
