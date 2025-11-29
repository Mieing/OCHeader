@class NSString;

@interface BTDIDFACache : NSObject

@property (copy) NSString *idfaString;
@property (copy) NSString *idfvString;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
