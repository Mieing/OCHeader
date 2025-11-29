@class NSString, NSDictionary;

@interface WCWebImageSourceFinderWrapper : NSObject

@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *feedNonceId;
@property (nonatomic) unsigned long long reportScene;
@property (retain, nonatomic) NSDictionary *extInfo;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
