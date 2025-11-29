@class NSURL, NSString, NSMutableDictionary;

@interface DTRpcConfigMXXTIY : NSObject

@property (retain, nonatomic) NSURL *gatewayURL;
@property (nonatomic) BOOL networkActivityIndicatorVisible;
@property (nonatomic) BOOL requestGZip;
@property (nonatomic) NSString *operationType;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)copy;
- (void).cxx_destruct;
- (id)init;

@end
