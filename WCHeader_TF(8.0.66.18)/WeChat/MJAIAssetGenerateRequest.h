@class NSArray, NSString, NSData;

@interface MJAIAssetGenerateRequest : NSObject

@property (readonly, nonatomic) NSArray *originAssetURLs;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSData *aigcBuffer;

- (id)initWithOriginAssetURLs:(id)a0;
- (void).cxx_destruct;

@end
