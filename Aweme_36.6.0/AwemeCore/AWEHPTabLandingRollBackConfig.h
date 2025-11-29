@class NSString, AWEHPTabLandingRollBackFloatButtonConfig;

@interface AWEHPTabLandingRollBackConfig : NSObject <NSCopying>

@property (copy, nonatomic) AWEHPTabLandingRollBackFloatButtonConfig *styleConfig;
@property (copy, nonatomic) id /* block */ rollBackCallBack;
@property (copy, nonatomic) id /* block */ handleRollBackBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *bizType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
