@class NSString, NSMutableArray, RivalsRecommendResponse_PopupInfo_PopupItemInfo_Button;

@interface RivalsRecommendResponse_PopupInfo_PopupItemInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *skinInfoArray;
@property (readonly, nonatomic) unsigned long long skinInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *peakCardItemsArray;
@property (readonly, nonatomic) unsigned long long peakCardItemsArray_Count;
@property (retain, nonatomic) RivalsRecommendResponse_PopupInfo_PopupItemInfo_Button *button;
@property (nonatomic) BOOL hasButton;

+ (id)descriptor;

@end
