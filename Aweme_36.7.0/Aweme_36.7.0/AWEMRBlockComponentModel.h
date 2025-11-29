@class AWEMessageReachComponentModel, NSString, AWEHPChannelBadgeShowResultModel, AWEHPChannelBubbleShowResultModel, AWEMessageReachParamContext;

@interface AWEMRBlockComponentModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uiType;
@property (nonatomic) long long blockTime;
@property (retain, nonatomic) AWEMessageReachParamContext *paramContext;
@property (retain, nonatomic) AWEMessageReachComponentModel *componentModel;
@property (retain, nonatomic) AWEHPChannelBubbleShowResultModel *bubbleResultModel;
@property (copy, nonatomic) id /* block */ bubbleOriginShowCallback;
@property (retain, nonatomic) AWEHPChannelBadgeShowResultModel *badgeResultModel;
@property (copy, nonatomic) id /* block */ badgeOriginShowCallback;
@property (nonatomic) long long retryType;
@property (nonatomic) long long retrySource;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
