@class NSString;

@interface WCFinderJSApiPreloadFeedItem : NSObject

@property (retain, nonatomic) NSString *encryptId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) BOOL needPreloadFirstFrame;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
