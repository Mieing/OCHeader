@class NSString, HTSLiveImage, RightButton, NSMutableArray;

@interface InteractEntranceCell : IESLivePBBaseMessage

@property (nonatomic) int interactType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long groupId;
@property (retain, nonatomic) NSMutableArray *callServerScenesArray;
@property (readonly, nonatomic) unsigned long long callServerScenesArray_Count;
@property (retain, nonatomic) NSMutableArray *labelsArray;
@property (readonly, nonatomic) unsigned long long labelsArray_Count;
@property (retain, nonatomic) RightButton *button;
@property (nonatomic) BOOL hasButton;
@property (copy, nonatomic) NSString *iconLabel;
@property (retain, nonatomic) NSMutableArray *selectKeysArray;
@property (readonly, nonatomic) unsigned long long selectKeysArray_Count;
@property (copy, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSMutableArray *highlightDescArray;
@property (readonly, nonatomic) unsigned long long highlightDescArray_Count;
@property (retain, nonatomic) NSMutableArray *highlightLabelArray;
@property (readonly, nonatomic) unsigned long long highlightLabelArray_Count;
@property (copy, nonatomic) NSString *highlightIcon;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *gameCardExtra;
@property (copy, nonatomic) NSString *extendExtra;

+ (id)descriptor;

@end
