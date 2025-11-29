@class NSArray;

@interface WCCanvsComponentScrollGroupListInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSArray *componentGroupList;
@property (nonatomic) int pageCtrType;
@property (nonatomic) int isFullScreen;
@property (nonatomic) int autoCarousel;
@property (nonatomic) int enterViewIndex;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
