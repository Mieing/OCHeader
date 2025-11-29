@class NSString, AWEUserModel;

@interface AWESignatureEditCollectionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *hashTagName;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
