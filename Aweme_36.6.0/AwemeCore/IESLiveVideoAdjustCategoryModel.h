@class NSString, NSArray;

@interface IESLiveVideoAdjustCategoryModel : NSObject

@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) BOOL hasResetButton;

- (BOOL)showRedDotWithTag:(id)a0;
- (void).cxx_destruct;

@end
