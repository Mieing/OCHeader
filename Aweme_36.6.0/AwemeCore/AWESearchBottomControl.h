@class NSString, NSArray;

@interface AWESearchBottomControl : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long bottomControlPriority;
@property (retain, nonatomic) NSArray *bottomShowInfoList;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isLargerThanAnyControlIn:(id)a0;
- (BOOL)isEqualOrLargerThanAnyControlIn:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldShow;

@end
