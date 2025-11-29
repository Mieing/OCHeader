@class NSDictionary;

@interface AWEMusicVideoEngineModel : TTVideoEngineModel

@property (copy, nonatomic) NSDictionary *jsonInfo;

- (id)dictInfo;
- (id)initWithJsonStr:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (BOOL)hasExpired;

@end
