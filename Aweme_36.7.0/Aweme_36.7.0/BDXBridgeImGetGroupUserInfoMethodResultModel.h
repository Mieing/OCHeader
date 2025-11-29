@class NSString;

@interface BDXBridgeImGetGroupUserInfoMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *groupAlias;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
