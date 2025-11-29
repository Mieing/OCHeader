@class UrlStructV2, NSString, EntertainmentItemLabelV2, NSMutableArray;

@interface EntertainmentBlockCardInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSMutableArray *subTitleArray;
@property (readonly, nonatomic) unsigned long long subTitleArray_Count;
@property (retain, nonatomic) NSMutableArray *tipTextArray;
@property (readonly, nonatomic) unsigned long long tipTextArray_Count;
@property (retain, nonatomic) UrlStructV2 *coverURL;
@property (nonatomic) BOOL hasCoverURL;
@property (retain, nonatomic) UrlStructV2 *titleIconURL;
@property (nonatomic) BOOL hasTitleIconURL;
@property (retain, nonatomic) NSMutableArray *flowBottomButtonsArray;
@property (readonly, nonatomic) unsigned long long flowBottomButtonsArray_Count;
@property (retain, nonatomic) EntertainmentItemLabelV2 *coverLabel;
@property (nonatomic) BOOL hasCoverLabel;

+ (id)descriptor;

@end
