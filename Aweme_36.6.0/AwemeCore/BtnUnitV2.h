@class BtnTextInfoV2, BtnActionInfoV2, BtnIconInfoV2, BtnContainerStyleV2, NSMutableArray;

@interface BtnUnitV2 : GPBMessage

@property (retain, nonatomic) BtnTextInfoV2 *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) BtnIconInfoV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int position;
@property (nonatomic) BOOL hasPosition;
@property (retain, nonatomic) BtnActionInfoV2 *clickAction;
@property (nonatomic) BOOL hasClickAction;
@property (retain, nonatomic) BtnContainerStyleV2 *containerStyle;
@property (nonatomic) BOOL hasContainerStyle;
@property (nonatomic) int exitType;
@property (nonatomic) BOOL hasExitType;
@property (retain, nonatomic) NSMutableArray *btnDataKeysArray;
@property (readonly, nonatomic) unsigned long long btnDataKeysArray_Count;

+ (id)descriptor;

@end
