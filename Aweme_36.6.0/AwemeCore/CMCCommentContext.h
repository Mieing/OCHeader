@class NSString, AWEAwemeModel;
@protocol AWECommentListHeaderViewExtraInfoProtocol;

@interface CMCCommentContext : CMCContext

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) id<AWECommentListHeaderViewExtraInfoProtocol> extraInfo;
@property (copy, nonatomic) NSString *priorityType;
@property (copy, nonatomic) id /* block */ generateRepostTrackInfo;
@property (copy, nonatomic) id /* block */ trackEnteringPOIDetail;
@property (weak, nonatomic) id videoPlayer;

+ (id)contextWithAweme:(id)a0;

- (id)initWithAweme:(id)a0;
- (void).cxx_destruct;

@end
