@class WAAppItemData, NSMutableArray, WAContact;

@interface WAHomeTableViewCellViewModel : NSObject

@property (retain, nonatomic) WAAppItemData *appItem;
@property (retain, nonatomic) NSMutableArray *menuItemsArray;
@property (retain, nonatomic) WAContact *oContact;

+ (id)createByAppItem:(id)a0 menuItemArray:(id)a1 contact:(id)a2;

- (void).cxx_destruct;

@end
