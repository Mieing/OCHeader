@class NSString, NSMutableArray;
@protocol IESECMallFeedMonitorDelegate;

@interface IESECMallFeedMonitor : NSObject

@property (nonatomic) double createTime;
@property (retain, nonatomic) NSMutableArray *cardLists;
@property (weak, nonatomic) id<IESECMallFeedMonitorDelegate> delegate;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long resVersion;
@property (nonatomic) long long pageNum;

- (BOOL)containsItemWithId:(id)a0;
- (id)findTargetItem:(id)a0;
- (void)cellWillDisplay:(id)a0 section:(long long)a1 index:(long long)a2 isFirstShow:(BOOL)a3 sessionID:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
