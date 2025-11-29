@class NSMutableArray;

@interface IESLiveMsgBoardShortTouchInfo : IESLivePBBaseMessage

@property (nonatomic) long long msgCount;
@property (retain, nonatomic) NSMutableArray *senderInfoListArray;
@property (readonly, nonatomic) unsigned long long senderInfoListArray_Count;

+ (id)descriptor;

@end
