@class NSRecursiveLock, NSString, WCFinderDataItem, WCFinderPostSessionModel;

@interface WCFinderTempSaveService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCFinderDataItem *dataItemModel;
@property (retain, nonatomic) WCFinderPostSessionModel *postSession;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setDataItem:(id)a0;
- (id)p_getReportPostStateModel;
- (void)removeOldReportPostStateModel:(id)a0;
- (void)checkSingleFileDataTransfer;
- (void).cxx_destruct;

@end
