@class HTSEventContext, NSString;

@interface IESLiveVisibleScopeHistoryDataController : IESLiveListDataController

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *actionType;
@property (nonatomic) BOOL isPlayBack;

- (id)initWithType:(unsigned long long)a0 trackerContext:(id)a1;
- (id)requestParamsWithType:(unsigned long long)a0;
- (void)trackFetchVisibleList:(id)a0;
- (id)getActionFromVisibleScopeType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
