@class AWECommentMediaFeedParams, AWECommentMediaFeedBasicParams;
@protocol AWECommentGeneralModelProtocol;

@interface AWECommentMediaFeedParamsConfig : NSObject

@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) unsigned long long appearType;
@property (readonly, nonatomic) id<AWECommentGeneralModelProtocol> data;
@property (readonly, nonatomic) AWECommentMediaFeedBasicParams *basicParams;
@property (readonly, nonatomic) AWECommentMediaFeedParams *mediaFeedParams;

- (id)initWithData:(id)a0 basicParams:(id)a1 mediaFeedParams:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
