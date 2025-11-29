@protocol BDWebSecureLinkSettingDelegate;

@interface BDWebSecureLinkCustomSetting : NSObject

@property (nonatomic) unsigned int errorOverwhelmingCount;
@property (nonatomic) long long errorOverwhelmingDuration;
@property (nonatomic) long long safeDuraionAfterOverWhelming;
@property (nonatomic) float syncCheckTimeLimit;
@property (nonatomic) unsigned long long area;
@property (weak, nonatomic) id<BDWebSecureLinkSettingDelegate> delegate;

- (void).cxx_destruct;
- (id)init;

@end
