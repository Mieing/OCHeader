@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveReference;

@interface IESLiveInnerFeedReferenceController : NSObject <IESLiveInnerFeedDisplayAction>

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) id<IESLiveReference> reference;
@property (nonatomic) BOOL hasReleaseSlideVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidDisappear;
- (void)innerFeedDidEndDecelerating:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
