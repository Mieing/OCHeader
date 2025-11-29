@class NSString, NSObject;
@protocol AWEPostPageContext;

@interface AWEPostPageTagRecommendHandler : NSObject <AWEPostPageTagRecommendService>

@property (retain, nonatomic) NSObject *fetchRecommendHashtagSignal;
@property (retain, nonatomic) NSString *didClickedHashTagSignal;
@property (nonatomic) long long hashtagButtonDidClickSiganl;
@property (nonatomic) long long atButtonDidClickSiganl;
@property (nonatomic) long long switchInputButtonDidClickSiganl;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)sendDidClickedHashTagSignal:(id)a0;
- (void)sendHashTagButtonDidClick;
- (void)sendAtButtonDidClick;
- (void)sendFetchRecommendHashtagSignal:(unsigned long long)a0 model:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
