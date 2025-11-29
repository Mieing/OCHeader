@class ABAReportPrams, WCFinderPostSessionModel, NSDictionary, FinderVideoTemplateInfo;

@interface MMShortVideoParamModel : NSObject

@property (nonatomic) BOOL immediately;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL frontCamera;
@property (nonatomic) BOOL hasMutation;
@property (retain, nonatomic) WCFinderPostSessionModel *finderPostModel;
@property (retain, nonatomic) ABAReportPrams *videoScoreParams;
@property (retain, nonatomic) FinderVideoTemplateInfo *tempalteInfo;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;

@end
