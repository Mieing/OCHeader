@class NSNumber, NSDictionary, IESLiveIAPModel;

@interface IESLiveIAPPayModel : NSObject

@property (retain, nonatomic) IESLiveIAPModel *iapModel;
@property (retain, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long requestPage;

- (id)initWithIapModel:(id)a0 source:(id)a1 requestPage:(unsigned long long)a2 extraParams:(id)a3;
- (void).cxx_destruct;

@end
