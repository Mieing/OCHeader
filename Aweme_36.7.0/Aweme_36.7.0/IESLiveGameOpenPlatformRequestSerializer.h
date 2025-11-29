@class NSMutableDictionary;

@interface IESLiveGameOpenPlatformRequestSerializer : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders;

+ (id)serializer;

- (id)requestWithMethod:(id)a0 URLString:(id)a1 data:(id)a2;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;

@end
