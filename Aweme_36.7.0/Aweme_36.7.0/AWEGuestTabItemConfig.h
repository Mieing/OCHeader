@class NSString, IESSegmentedItem;

@interface AWEGuestTabItemConfig : NSObject

@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) Class tabContainerClass;
@property (retain, nonatomic) IESSegmentedItem *segmentedItem;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
