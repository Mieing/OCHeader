@class NSError;

@interface IESECSliceXExprCoreResponse : NSObject

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double execCost;
@property (nonatomic) BOOL parseHitCache;

- (void).cxx_destruct;

@end
