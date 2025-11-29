@class AWETeenPlayInteractionContext;

@interface AWETeenPlayInteractionBaseViewModel : NSObject

@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (nonatomic) unsigned long long eventSource;

- (id)referString;
- (id)logExtraDict;
- (id)enterFrom;
- (id)fromModel;
- (id)interactor_fromModel;
- (void)doTrackWithType:(long long)a0 enterMethod:(id)a1;
- (id)model;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
