@class NSNumber, NSArray;

@interface AWEHPTabConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *editMode;
@property (copy, nonatomic) NSNumber *longPressEdit;
@property (copy, nonatomic) NSNumber *hotSwitchType;
@property (copy, nonatomic) NSNumber *hotSwitchStrategy;
@property (copy, nonatomic) NSNumber *requestInterval;
@property (nonatomic) long long bottomSecondTabReplaceable;
@property (copy, nonatomic) NSArray *bottomSecondTabReplaceableList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end
