@class BDARVADModel;

@interface BDARVADModelWrapper : NSObject

@property (retain, nonatomic) BDARVADModel *adModel;
@property (nonatomic) double savaTimestamp;
@property (nonatomic) long long expiredTimestamp;

+ (id)modelWrapperWithAD:(id)a0 enableExpire:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)isExpired;

@end
