@class NSArray;

@interface WCStoryTimelineDataUnit : NSObject

@property (copy, nonatomic) NSArray *timestampUnreadUnitArray;
@property (copy, nonatomic) NSArray *timestampReadUnitArray;
@property (copy, nonatomic) NSArray *unreadCornerMessageUnitArray;
@property (copy, nonatomic) NSArray *timestampUnreadCellModelArray;
@property (copy, nonatomic) NSArray *timestampReadCellModelArray;
@property (copy, nonatomic) NSArray *unreadCornerMessageCellModelArray;
@property (readonly, nonatomic) long long unreadFavorCellModelCount;
@property (readonly, nonatomic) long long readFavorCellModelCount;

- (id)init;
- (void).cxx_destruct;

@end
