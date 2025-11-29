@class NSMutableArray, HTSLiveCommon, HTSLiveImage;

@interface HTSLiveRoomCommentTopicMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *commentTopicChatListArray;
@property (readonly, nonatomic) unsigned long long commentTopicChatListArray_Count;

+ (id)descriptor;

@end
