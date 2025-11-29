@class NSString;

@interface PreloadLiteAppInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (nonatomic) BOOL allowPreloadWhenOpen;
@property (nonatomic) BOOL keepAliveWhenVcDealloc;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) BOOL keepAlive;

- (id)init:(id)a0 page:(id)a1;
- (void).cxx_destruct;

@end
