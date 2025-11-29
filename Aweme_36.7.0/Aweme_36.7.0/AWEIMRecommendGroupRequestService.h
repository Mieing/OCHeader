@class NSString;

@interface AWEIMRecommendGroupRequestService : NSObject <AWEIMRecommendGroupRequestServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRecommendItemDatas;
- (id)fetchApplyRecommendGroupVerifyInfoWithChatModel:(id)a0;
- (id)requestUpdateRecommendGroupStatusWithParams:(id)a0;

@end
