@class NSString, RTVFeedShareModel;

@interface RTVXRFeedSharePreloadModel : NSObject

@property (readonly, nonatomic) NSString *roomID;
@property (readonly, nonatomic) RTVFeedShareModel *shareModel;

- (id)initWithFeedShareModel:(id)a0 roomID:(id)a1;
- (void)updateFeedShareModel:(id)a0;
- (void).cxx_destruct;

@end
