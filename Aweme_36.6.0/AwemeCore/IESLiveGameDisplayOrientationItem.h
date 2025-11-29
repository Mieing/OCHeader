@class NSArray;

@interface IESLiveGameDisplayOrientationItem : NSObject

@property (retain, nonatomic) NSArray *supportGameSpecifyRatioTypes;
@property (readonly, nonatomic) unsigned long long displayOrientation;

- (id)getDisplayTitle;
- (id)initWithGameDisplayOrientation:(unsigned long long)a0;
- (id)constructGameSpecifyRatioSegmentedItems;
- (void).cxx_destruct;

@end
