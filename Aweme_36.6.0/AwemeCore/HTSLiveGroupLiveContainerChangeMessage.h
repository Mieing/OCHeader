@class NSString, NSMutableArray, HTSLiveCommon;

@interface HTSLiveGroupLiveContainerChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
