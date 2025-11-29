@class NSString;

@interface FinderLiveMilestone : WXPBGeneratedMessage

@property (nonatomic) unsigned int showStyleType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *pedestalTitle;
@property (retain, nonatomic) NSString *dateFormatStr;
@property (retain, nonatomic) NSString *nodeNum;
@property (nonatomic) unsigned int milestoneType;
@property (retain, nonatomic) NSString *animationUrl;
@property (retain, nonatomic) NSString *animationMd5;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSString *greetingWords;

+ (void)initialize;

@end
