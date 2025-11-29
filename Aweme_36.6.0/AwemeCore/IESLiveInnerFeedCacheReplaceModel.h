@class NSString, IESLiveEnterRoomBusinessParamsArray;

@interface IESLiveInnerFeedCacheReplaceModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *eventParams;

- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1 eventParams:(id)a2;
- (BOOL)enableFeedCacheReplace;
- (BOOL)enableDirectNotify;
- (long long)maxLoadmoreCount;
- (BOOL)localUnreadCacheEnable;
- (void).cxx_destruct;

@end
