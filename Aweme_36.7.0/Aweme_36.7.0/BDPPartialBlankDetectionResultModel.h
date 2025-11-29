@class NSString, NSNumber, NSArray;

@interface BDPPartialBlankDetectionResultModel : NSObject

@property (nonatomic) BOOL isPartialBlank;
@property (nonatomic) long long detectionDuration;
@property (nonatomic) long long classifyDetectionDuration;
@property (nonatomic) long long uploadDuration;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *bestClass;
@property (retain, nonatomic) NSString *bestBBox;
@property (retain, nonatomic) NSNumber *bestScore;
@property (retain, nonatomic) NSArray *allDetectedClasses;
@property (retain, nonatomic) NSArray *allDetectedBBoxes;

- (void).cxx_destruct;

@end
