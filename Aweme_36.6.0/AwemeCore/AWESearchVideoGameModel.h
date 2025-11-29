@class AWESearchVideoGameDisplayModel, NSString, AWESearchVideoGameAttachedModel, NSNumber;

@interface AWESearchVideoGameModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *displayStr;
@property (retain, nonatomic) AWESearchVideoGameDisplayModel *displayInfo;
@property (copy, nonatomic) NSString *alasrc;
@property (retain, nonatomic) NSNumber *aladdinID;
@property (retain, nonatomic) AWESearchVideoGameAttachedModel *attachedInfo;

+ (id)attachedInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
