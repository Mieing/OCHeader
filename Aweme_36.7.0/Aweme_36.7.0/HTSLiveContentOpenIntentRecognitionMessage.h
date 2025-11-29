@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveContentOpenIntentRecognitionMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *resultArray;
@property (readonly, nonatomic) unsigned long long resultArray_Count;

+ (id)descriptor;

@end
