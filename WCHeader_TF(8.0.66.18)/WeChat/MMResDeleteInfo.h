@class NSString, MMResDeleteUrlInfo;

@interface MMResDeleteInfo : MMObject

@property (nonatomic) unsigned int resType;
@property (nonatomic) unsigned int subResType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sampleId;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) MMResDeleteUrlInfo *resDeleteUrlInfo;

- (void).cxx_destruct;

@end
