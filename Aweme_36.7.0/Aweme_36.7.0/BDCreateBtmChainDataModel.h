@class NSString;

@interface BDCreateBtmChainDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *btmPre;
@property (copy, nonatomic) NSString *btmPpre;
@property (copy, nonatomic) NSString *btmUnitId;
@property (copy, nonatomic) NSString *btmPreUnitId;
@property (copy, nonatomic) NSString *btmPpreUnitId;
@property (copy, nonatomic) NSString *btmShowId;
@property (copy, nonatomic) NSString *btmInstanceId;
@property (retain, nonatomic) id btmChain;
@property (retain, nonatomic) id bcmDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
