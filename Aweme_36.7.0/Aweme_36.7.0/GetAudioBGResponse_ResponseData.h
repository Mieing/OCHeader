@class NSString, NSMutableArray;

@interface GetAudioBGResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *bgListArray;
@property (readonly, nonatomic) unsigned long long bgListArray_Count;
@property (nonatomic) int ugcAvailable;
@property (copy, nonatomic) NSString *preChoice;
@property (retain, nonatomic) NSMutableArray *animatedExtsArray;
@property (readonly, nonatomic) unsigned long long animatedExtsArray_Count;
@property (retain, nonatomic) NSMutableArray *imageExtsArray;
@property (readonly, nonatomic) unsigned long long imageExtsArray_Count;
@property (nonatomic) BOOL needAiGenerate;
@property (nonatomic) int customBgMaxLen;

+ (id)descriptor;

@end
