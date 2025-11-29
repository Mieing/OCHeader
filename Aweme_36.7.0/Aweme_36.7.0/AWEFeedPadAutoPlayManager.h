@class NSString;

@interface AWEFeedPadAutoPlayManager : NSObject <AWEFeedAutoPlayManagerProtocol>

@property (nonatomic) long long autoPlayState;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ userInteractFilterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)autoNextFilterWithAweme:(id)a0 context:(id)a1;
- (void)updateAutoPlayState:(long long)a0;
- (BOOL)userInteractFilter;
- (void)initAutoPlayState;
- (long long)padAutoPlayDefaultState;
- (void).cxx_destruct;
- (id)init;

@end
