@class NSArray, NSString;

@interface MMFinderLiveFansGroupAnchorEditViewModel : NSObject

@property (retain, nonatomic) NSArray *customizableGiftItems;
@property (retain, nonatomic) NSString *groupName;
@property (readonly, nonatomic) BOOL hasCustomizableGifts;

+ (id)viewModelWithGroupName:(id)a0 customizableGifts:(id)a1 customizationInfo:(id)a2;

- (void).cxx_destruct;

@end
