@class NSArray, NSString;

@interface BTRecommendFinderDataWrapper : NSObject

@property (nonatomic) int subType;
@property (retain, nonatomic) NSArray *finderDataArr;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *fromSessionIdInfo;

- (BOOL)isValid;
- (id)recFinderCardDataArr;
- (void).cxx_destruct;

@end
