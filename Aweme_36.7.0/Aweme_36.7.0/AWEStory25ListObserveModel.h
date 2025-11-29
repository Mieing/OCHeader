@class AWEStory25ListReadModel;

@interface AWEStory25ListObserveModel : NSObject

@property (nonatomic) long long changeType;
@property (retain, nonatomic) AWEStory25ListReadModel *readModel;

- (id)initWithChangeType:(long long)a0 readModel:(id)a1;
- (void).cxx_destruct;

@end
