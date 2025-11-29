@class EntertainmentItemLabelV2, NSString, EntertainmentBlockCardInfoV2, NSMutableArray, PreviewConfigV2;

@interface EntertainmentUIConfigV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *flowBottomButtonsArray;
@property (readonly, nonatomic) unsigned long long flowBottomButtonsArray_Count;
@property (retain, nonatomic) NSMutableArray *blockCardButtonsArray;
@property (readonly, nonatomic) unsigned long long blockCardButtonsArray_Count;
@property (retain, nonatomic) EntertainmentItemLabelV2 *itemLabelInfo;
@property (nonatomic) BOOL hasItemLabelInfo;
@property (retain, nonatomic) PreviewConfigV2 *previewConfig;
@property (nonatomic) BOOL hasPreviewConfig;
@property (copy, nonatomic) NSString *maskText;
@property (nonatomic) BOOL hasMaskText;
@property (retain, nonatomic) EntertainmentItemLabelV2 *universalCoverLabel;
@property (nonatomic) BOOL hasUniversalCoverLabel;
@property (retain, nonatomic) NSMutableArray *landscapePreviewButtonsArray;
@property (readonly, nonatomic) unsigned long long landscapePreviewButtonsArray_Count;
@property (retain, nonatomic) NSMutableArray *landscapeBlockButtonsArray;
@property (readonly, nonatomic) unsigned long long landscapeBlockButtonsArray_Count;
@property (retain, nonatomic) EntertainmentBlockCardInfoV2 *blockCardInfo;
@property (nonatomic) BOOL hasBlockCardInfo;
@property (copy, nonatomic) NSString *landMaskText;
@property (nonatomic) BOOL hasLandMaskText;
@property (retain, nonatomic) NSMutableArray *guidanceButtonsArray;
@property (readonly, nonatomic) unsigned long long guidanceButtonsArray_Count;

+ (id)descriptor;

@end
