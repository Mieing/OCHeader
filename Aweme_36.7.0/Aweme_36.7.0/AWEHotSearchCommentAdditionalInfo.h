@class NSString, NSDictionary, NSNumber;

@interface AWEHotSearchCommentAdditionalInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *billboardHeader;
@property (copy, nonatomic) NSString *hotSpotDesc;
@property (copy, nonatomic) NSString *hotListParam;
@property (copy, nonatomic) NSDictionary *userIdentities;
@property (copy, nonatomic) NSDictionary *userVoteTags;
@property (retain, nonatomic) NSNumber *discussingPV;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
