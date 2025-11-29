@class NSString;

@interface FinderLiveGuideInfoItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) unsigned int guideType;
@property (retain, nonatomic) NSString *guideTitle;
@property (retain, nonatomic) NSString *guideText;
@property (nonatomic) unsigned int limitation;

+ (void)initialize;

@end
