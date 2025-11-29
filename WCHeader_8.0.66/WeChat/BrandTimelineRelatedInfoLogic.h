@protocol BrandTimelineRelatedInfoLogicDelegate;

@interface BrandTimelineRelatedInfoLogic : MMObject

@property (weak, nonatomic) id<BrandTimelineRelatedInfoLogicDelegate> delegate;

- (void)checkAndUpdateVisibleMsgsRelatedInfo;
- (void)checkAndUpdateRelatedInfoWithMsgArr:(id)a0;
- (id)getPageIdentifierForReaderWrap:(id)a0;
- (id)getRelatedInfoWithReaderWrap:(id)a0;
- (void).cxx_destruct;

@end
