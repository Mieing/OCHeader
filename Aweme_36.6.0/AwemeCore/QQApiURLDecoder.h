@class NSString, NSDictionary;

@interface QQApiURLDecoder : NSObject

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSDictionary *queryItem;

+ (id)decoderWithUrl:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
