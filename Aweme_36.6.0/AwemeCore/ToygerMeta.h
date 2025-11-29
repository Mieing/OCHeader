@class NSString, NSDictionary, NSNumber;

@interface ToygerMeta : ToygerBaseModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *score;
@property (copy, nonatomic) NSDictionary *collectInfo;
@property (copy, nonatomic) NSString *collectInfoSig;
@property (retain, nonatomic) NSNumber *serialize;

- (void).cxx_destruct;
- (id)init;

@end
