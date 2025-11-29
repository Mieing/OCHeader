@class NSString, WCFinderShareToMomentsItem;

@interface WCContentItemFinderViewModel : NSObject

@property (retain, nonatomic) WCFinderShareToMomentsItem *shareItem;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) BOOL isVideoFeed;
@property (nonatomic) unsigned int mediaCount;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) struct CGSize { double width; double height; } thumbSize;
@property (nonatomic) unsigned int totalDuration;

- (id)debugDescription;
- (id)initWithContentItem:(id)a0;
- (id)getShareItem:(id)a0;
- (BOOL)isMemberShipFeed;
- (struct CGSize { double x0; double x1; })fittingSizeWithCoverItem:(id)a0;
- (struct CGSize { double x0; double x1; })fittingSizeWithCoverType:(unsigned long long)a0 withWidth:(double)a1 andHeight:(double)a2;
- (void).cxx_destruct;

@end
