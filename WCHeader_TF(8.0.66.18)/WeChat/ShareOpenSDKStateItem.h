@interface ShareOpenSDKStateItem : MMObject

@property (nonatomic) long long m_state;
@property (nonatomic) double m_progress;

- (id)initWithState:(long long)a0;
- (id)initWithState:(long long)a0 progress:(double)a1;

@end
