@class NSMutableArray, HTSLiveRoom;

@interface FeedPreviewData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (readonly, nonatomic) unsigned long long fieldsArray_Count;

+ (id)descriptor;

@end
