@class NSString, NSMutableArray, HTSLiveText;

@interface GetRoomPanelResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *changeText;
@property (nonatomic) BOOL hasChangeText;
@property (retain, nonatomic) HTSLiveText *suggestText;
@property (nonatomic) BOOL hasSuggestText;
@property (retain, nonatomic) NSMutableArray *roomStatsPanelListArray;
@property (readonly, nonatomic) unsigned long long roomStatsPanelListArray_Count;
@property (retain, nonatomic) NSMutableArray *suggestListArray;
@property (readonly, nonatomic) unsigned long long suggestListArray_Count;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) long long refreshTime;
@property (copy, nonatomic) NSString *abnormalType;
@property (nonatomic) int changeStatus;
@property (copy, nonatomic) NSString *changeTextString;

+ (id)descriptor;

@end
