@class NSString;
@protocol AWEDetailFeedTableViewAbilityProtocol;

@interface AWEDetailFeedCoreContainer : AWEArchContainer <AWEDetailFeedCoreAbilityProtocol>

@property (retain, nonatomic) id<AWEDetailFeedTableViewAbilityProtocol> tableViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (BOOL)shouldEnableCellRefactor;
- (void).cxx_destruct;

@end
