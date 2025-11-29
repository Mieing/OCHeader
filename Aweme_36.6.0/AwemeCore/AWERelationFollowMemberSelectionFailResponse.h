@class NSArray, NSString;

@interface AWERelationFollowMemberSelectionFailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *familiars;
@property (copy, nonatomic) NSString *toastMsg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
