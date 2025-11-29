@class NSNumber, NSString;

@interface AWEFansPushListDataController : AWEListDataController <AWEFansPushListDataControllerProtocol>

@property (nonatomic) long long nextUserType;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHistory;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSNumber *lastTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getParams;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
