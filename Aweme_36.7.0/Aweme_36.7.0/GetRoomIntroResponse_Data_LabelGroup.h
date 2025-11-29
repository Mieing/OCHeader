@class NSString, NSMutableArray;

@interface GetRoomIntroResponse_Data_LabelGroup : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupText;
@property (retain, nonatomic) NSMutableArray *labelsArray;
@property (readonly, nonatomic) unsigned long long labelsArray_Count;

+ (id)descriptor;

@end
