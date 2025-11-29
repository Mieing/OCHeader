@class NSMutableArray;

@interface FavPanelInfoV2 : GPBMessage

@property (nonatomic) int favSnackStatus;
@property (nonatomic) BOOL hasFavSnackStatus;
@property (retain, nonatomic) NSMutableArray *favOptionListArray;
@property (readonly, nonatomic) unsigned long long favOptionListArray_Count;

+ (id)descriptor;

- (int)favSnackStatus;

@end
