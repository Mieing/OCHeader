@class NSLock, NSMutableDictionary, NSString;

@interface AWERTVLongVideoHistoryController : NSObject <AWERTVLongVideoHistoryControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *watchHistory;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordAweme:(id)a0 watchedProgress:(double)a1;
- (void)recordAwemeID:(id)a0 watchedProgress:(double)a1;
- (double)watchedProgressOfAweme:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
