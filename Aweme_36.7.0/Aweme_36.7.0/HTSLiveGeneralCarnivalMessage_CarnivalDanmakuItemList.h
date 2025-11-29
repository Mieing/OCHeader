@class NSMutableArray;

@interface HTSLiveGeneralCarnivalMessage_CarnivalDanmakuItemList : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *danmakuItemListArray;
@property (readonly, nonatomic) unsigned long long danmakuItemListArray_Count;

+ (id)descriptor;

@end
