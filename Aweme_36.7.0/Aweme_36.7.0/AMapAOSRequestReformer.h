@class NSArray, NSString;

@interface AMapAOSRequestReformer : AMapRequestReformer

@property (copy, nonatomic) NSArray *signParameters;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *serverKey;
@property (copy, nonatomic) NSString *xxKey;
@property (copy, nonatomic) NSString *keyt;

- (void)reformParameters:(id)a0 result:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
