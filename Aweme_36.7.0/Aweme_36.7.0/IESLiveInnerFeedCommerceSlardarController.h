@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedCommerceSlardarController : NSObject <IESLiveInnerFeedDisplayAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (void)innerFeedDidEndDisplayObject:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
