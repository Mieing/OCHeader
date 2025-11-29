@class NSNumber;

@interface IESLiveSearchFriendHighlightRangeModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *location;
@property (retain, nonatomic) NSNumber *length;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
