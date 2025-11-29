@class NSArray, IGListIndexSetResult;

@interface BDECPigeonMessageDataSourceUpdate : NSObject

@property (retain) IGListIndexSetResult *cachedDiff;
@property (retain, nonatomic) NSArray *previousData;
@property (retain, nonatomic) NSArray *nowData;
@property (retain, nonatomic) NSArray *deletedData;
@property (readonly, nonatomic) NSArray *beforeUpdateMessageIdentifiers;
@property (readonly, nonatomic) NSArray *afterUpdateMessageIdentifiers;
@property (nonatomic) long long reason;

- (id)calcDiffs;
- (void).cxx_destruct;

@end
