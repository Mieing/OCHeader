@class NSString, NSArray, NSNumber;

@interface BDPPartialBlankResult : NSObject

@property (nonatomic) BOOL isHalfBlank;
@property (retain, nonatomic) NSString *bestClass;
@property (retain, nonatomic) NSArray *bestBBox;
@property (retain, nonatomic) NSNumber *bestScore;
@property (retain, nonatomic) NSArray *allDetectedClasses;
@property (retain, nonatomic) NSArray *allDetectedBBoxes;

- (void).cxx_destruct;

@end
