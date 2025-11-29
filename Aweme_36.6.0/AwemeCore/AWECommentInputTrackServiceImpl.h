@class NSString;

@interface AWECommentInputTrackServiceImpl : NSObject <AWECommentInputTrackService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackCommentSuccessWithAwemeModel:(id)a0 referString:(id)a1;
- (void)trackCommentSendSliWithItemID:(id)a0 referString:(id)a1;
- (void)trackForbidCommentToastShowWithAwemeModel:(id)a0 referString:(id)a1 toast:(id)a2;
- (void)trackFirstCommentGuideShowWithAwemeModel:(id)a0 referString:(id)a1;
- (void)trackFirstCommentGuideClickWithAwemeModel:(id)a0 referString:(id)a1 target:(id)a2;
- (id)buildEnterTextTrackParamsWithAwemeModel:(id)a0 generalModel:(id)a1 referString:(id)a2 enterMethod:(id)a3 belongScene:(unsigned long long)a4 extraDict:(id)a5;
- (id)buildCloseTextTrackParamsWithAwemeModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 closeMethod:(id)a3 typeContent:(id)a4;
- (id)buildCommentTrackParamsWithAwemeModel:(id)a0 referString:(id)a1 emoticonCount:(long long)a2 extraDict:(id)a3;

@end
