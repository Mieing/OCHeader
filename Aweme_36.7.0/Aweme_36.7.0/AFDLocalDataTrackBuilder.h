@class NSString, NSNumber, AFDLocalDataCenterTable;

@interface AFDLocalDataTrackBuilder : NSObject

@property (retain, nonatomic) AFDLocalDataCenterTable *table;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *subAction;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL hasSync;
@property (nonatomic) BOOL ucInit;
@property (copy, nonatomic) NSNumber *selectPoolCount;
@property (nonatomic) BOOL reuseSelect;
@property (copy, nonatomic) NSString *multiTable;

+ (id)builderWithTable:(id)a0;

- (id)buildParams;
- (void).cxx_destruct;

@end
