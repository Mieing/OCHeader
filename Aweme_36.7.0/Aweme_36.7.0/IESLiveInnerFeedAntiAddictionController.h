@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedAntiAddictionController : NSObject <IESLiveFeedInnerAntiAddictService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)insertAddictCardCardWithCellModel:(id)a0;
- (void)deleteAddictCardWithCellModel:(id)a0;
- (void)antiAddictCardLeave;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
