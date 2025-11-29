@class NSString, NSMutableArray;

@interface RivalsRecommendResponse_PopupInfo_PopupItemInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *skinInfoArray;
@property (readonly, nonatomic) unsigned long long skinInfoArray_Count;

+ (id)descriptor;

@end
