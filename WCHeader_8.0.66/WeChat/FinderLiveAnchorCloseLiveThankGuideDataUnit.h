@class FinderLiveAnchorCloseLiveThankGuideSingle, FinderLiveAnchorCloseLiveThankGuideMulti;

@interface FinderLiveAnchorCloseLiveThankGuideDataUnit : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderLiveAnchorCloseLiveThankGuideSingle *singleFormat;
@property (retain, nonatomic) FinderLiveAnchorCloseLiveThankGuideMulti *multiFormat;
@property (nonatomic) unsigned int analysisType;

+ (void)initialize;

@end
