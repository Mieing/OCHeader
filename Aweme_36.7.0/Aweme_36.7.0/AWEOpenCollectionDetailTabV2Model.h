@class NSString;

@interface AWEOpenCollectionDetailTabV2Model : AWEBaseApiModel

@property (nonatomic) long long collectionType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
