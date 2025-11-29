@class NSArray, NSString, NSDictionary;

@interface AFDLocalDataCompensateResponseModel : NSObject

@property (nonatomic) long long syncType;
@property (copy, nonatomic) NSArray *tableModels;
@property (copy, nonatomic) NSString *currentUserID;
@property (copy, nonatomic) NSArray *memoryModels;
@property (copy, nonatomic) NSDictionary *updateModelDictionary;
@property (copy, nonatomic) NSDictionary *deletePrimaryIdDictionary;

- (void).cxx_destruct;

@end
