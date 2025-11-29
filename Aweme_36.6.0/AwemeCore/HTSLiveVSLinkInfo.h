@class NSString, NSMutableArray;

@interface HTSLiveVSLinkInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tabTitle;
@property (retain, nonatomic) NSMutableArray *roomsArray;
@property (readonly, nonatomic) unsigned long long roomsArray_Count;
@property (nonatomic) int pattern;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) BOOL isMainRoom;

+ (id)descriptor;

@end
