@class NSArray;

@interface WCFinderLiveCardProductShowcase : NSObject

@property (retain, nonatomic) NSArray *productInfos;
@property (nonatomic) BOOL needRefresh;

+ (id)finderLiveCardProductShowcaseFrom:(id)a0;

- (id)toFinderLiveCardProductShowcase;
- (void).cxx_destruct;

@end
