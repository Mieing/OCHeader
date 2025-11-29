@class NSString, NSMutableArray, RightButtonInfo;

@interface InteractEntranceItem : IESLivePBBaseMessage

@property (nonatomic) long long interactId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *iconURLListArray;
@property (readonly, nonatomic) unsigned long long iconURLListArray_Count;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *iconLabel;
@property (retain, nonatomic) NSMutableArray *descLabelsArray;
@property (readonly, nonatomic) unsigned long long descLabelsArray_Count;
@property (retain, nonatomic) RightButtonInfo *rightButton;
@property (nonatomic) BOOL hasRightButton;
@property (retain, nonatomic) NSMutableArray *selectKeysArray;
@property (readonly, nonatomic) unsigned long long selectKeysArray_Count;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *gameCardExtra;
@property (copy, nonatomic) NSString *extendExtra;
@property (retain, nonatomic) NSMutableArray *callServerScenesArray;
@property (readonly, nonatomic) unsigned long long callServerScenesArray_Count;
@property (copy, nonatomic) NSString *appId;

+ (id)descriptor;

@end
