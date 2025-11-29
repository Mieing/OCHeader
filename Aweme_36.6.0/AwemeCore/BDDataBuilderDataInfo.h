@interface BDDataBuilderDataInfo : NSObject

@property (nonatomic) unsigned long long pathExistRequire;
@property (nonatomic) unsigned long long pathExistState;
@property (retain, nonatomic) id outputData;
@property (nonatomic) BOOL hasModified;
@property (retain, nonatomic) id resultData;

- (void).cxx_destruct;

@end
