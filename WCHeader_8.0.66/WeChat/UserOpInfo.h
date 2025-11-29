@class NSString;

@interface UserOpInfo : NSObject

@property (nonatomic) unsigned int module;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int seq;
@property (nonatomic) int currentPage;
@property (nonatomic) int opType;
@property (retain, nonatomic) NSString *dataflowSourceInfo;
@property (retain, nonatomic) NSString *dataflowResultInfo;
@property (retain, nonatomic) NSString *statusDesc1;
@property (retain, nonatomic) NSString *statusDesc2;

- (id)init;
- (id)genStatInfo;
- (void)resetStatus;
- (void).cxx_destruct;

@end
