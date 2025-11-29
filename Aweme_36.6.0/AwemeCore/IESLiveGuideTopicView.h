@class HTSEventContext, IESLiveGuideModel, UIImageView, UILabel, NSString, NSDictionary;

@interface IESLiveGuideTopicView : UIView

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *longText;
@property (copy, nonatomic) NSString *shortText;
@property (copy, nonatomic) NSString *longTopic;
@property (copy, nonatomic) NSString *shortTopic;
@property (copy, nonatomic) NSString *topicId;
@property (nonatomic) long long topicType;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isShortStyle;
@property (nonatomic) BOOL hasShownRecommendedTopic;
@property (nonatomic) unsigned long long topicStatus;

- (id)commonTrackParams;
- (void)trackClickEvent;
- (void)updateTopicContentWithModel:(id)a0;
- (id)initWithModel:(id)a0 trackContext:(id)a1;
- (void)updateContentStyleIsShort:(BOOL)a0;
- (id)getSelectedTopicInfo;
- (void)setupContentWithComponent:(id)a0;
- (void)clickTopicView;
- (void).cxx_destruct;
- (void)updateContent;
- (void)layoutSubviews;
- (void)setupUI;

@end
