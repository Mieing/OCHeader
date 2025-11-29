@class NSString;

@interface TemplateMsgFoldReportItem : MMObject

@property (nonatomic) long long opType;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic) unsigned int isCluster;
@property (copy, nonatomic) NSString *clusterId;
@property (nonatomic) unsigned int clusterCount;

- (void).cxx_destruct;

@end
