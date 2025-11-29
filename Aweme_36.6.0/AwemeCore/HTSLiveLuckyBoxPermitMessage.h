@class NSString, HTSLiveCommon, GPBInt64Array, NSMutableArray;

@interface HTSLiveLuckyBoxPermitMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) GPBInt64Array *boxIdArray;
@property (readonly, nonatomic) unsigned long long boxIdArray_Count;
@property (retain, nonatomic) NSMutableArray *boxIdStrArray;
@property (readonly, nonatomic) unsigned long long boxIdStrArray_Count;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long boxTabType;

+ (id)descriptor;

@end
