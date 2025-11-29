@class NSArray;

@interface WCSearchBarConfig : NSObject

@property (nonatomic) BOOL enableLargeInput;
@property (nonatomic) BOOL enableRemoveEditingWords;
@property (retain, nonatomic) NSArray *checkBoxes;
@property (retain, nonatomic) NSArray *actionButtons;
@property (nonatomic) double expectedHeight;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
