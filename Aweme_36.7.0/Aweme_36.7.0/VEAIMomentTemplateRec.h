@class NSString, NSArray;

@interface VEAIMomentTemplateRec : NSObject

@property (nonatomic) long long coverId;
@property (copy, nonatomic) NSString *currentMomentId;
@property (retain, nonatomic) NSArray *usedPairs;

- (void).cxx_destruct;

@end
