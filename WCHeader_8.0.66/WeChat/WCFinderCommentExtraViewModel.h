@class NSString, WCFinderKeywordComponent, ProductCommentInfo, FinderJumpInfo, WAAppOpenParameter;
@protocol WCFinderCommentExtraViewModelDelegate;

@interface WCFinderCommentExtraViewModel : NSObject

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *topLinkText;
@property (retain, nonatomic) WCFinderKeywordComponent *keyword;
@property (retain, nonatomic) FinderJumpInfo *linkJumpInfo;
@property (nonatomic) int sourceScene;
@property (retain, nonatomic) WAAppOpenParameter *shopCommentInfoParam;
@property (nonatomic) unsigned long long shopCommentCount;
@property (weak, nonatomic) id<WCFinderCommentExtraViewModelDelegate> delegate;
@property (retain, nonatomic) NSString *enterSessionId;
@property (nonatomic) BOOL topLinkExposed;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) ProductCommentInfo *shopInfo;
@property (nonatomic) long long productInfoSource;

- (id)initWithTid:(id)a0 scene:(int)a1 sourceScene:(int)a2;
- (void)regenEnterSessionId;
- (struct WCFinderKeywordAction { long long x0; id x1; })topLinkActionForUrl:(id)a0;
- (void)startRequest;
- (void)_handleLinkTips:(id)a0;
- (void).cxx_destruct;

@end
