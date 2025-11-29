@class NSString, MMResDecryptUrlInfo;

@interface MMResDecryptInfo : MMObject

@property (nonatomic) unsigned int resType;
@property (nonatomic) unsigned int subResType;
@property (nonatomic) unsigned int eid;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sampleId;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) MMResDecryptUrlInfo *resDecryptInfo;

- (void).cxx_destruct;

@end
