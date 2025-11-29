@class IESLiveInnerFeedContext, NSString, IESLiveDuplicateInfo;

@interface IESLiveInnerFeedDuplicateDataFilter : NSObject <IESLiveInnerFeedDataControlAction>

@property (retain, nonatomic) IESLiveDuplicateInfo *liveDuplicateInfos;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (id)duplicatedFilterItemWithDatas:(id)a0 originDatas:(id)a1;
- (long long)timeSpace;
- (BOOL)shouldFilterDuplicateItemWithModel:(id)a0 index:(unsigned long long)a1;
- (void)trackFilterItemWithEvent:(id)a0 model:(id)a1 extraParams:(id)a2;
- (void)addInnerRoomData:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
