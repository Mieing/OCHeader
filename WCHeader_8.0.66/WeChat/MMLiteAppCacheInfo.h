@class MMLiteAppViewController, OpenLiteAppInfo;

@interface MMLiteAppCacheInfo : NSObject

@property (retain, nonatomic) MMLiteAppViewController *vc;
@property (retain, nonatomic) OpenLiteAppInfo *openInfo;
@property (copy, nonatomic) id /* block */ block;

- (BOOL)isHitCache:(id)a0;
- (void).cxx_destruct;

@end
