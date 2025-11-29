@class NSString;

@interface EcsPresentPicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *msgcover;
@property (retain, nonatomic) NSString *boxoutercover;
@property (retain, nonatomic) NSString *boxinnercover;
@property (retain, nonatomic) NSString *normalcover;
@property (nonatomic) unsigned int merchantCoverId;
@property (retain, nonatomic) NSString *previewouterwcover;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;

+ (void)initialize;

@end
