@class NSString, NSMutableDictionary, NSMutableArray;

@interface HTSLiveOpenStreamUrlEncrypt : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtmpPullURL;
@property (copy, nonatomic) NSString *hlsPullURL;
@property (retain, nonatomic) NSMutableDictionary *flvPullURL;
@property (readonly, nonatomic) unsigned long long flvPullURL_Count;
@property (copy, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSMutableArray *hlsArray;
@property (readonly, nonatomic) unsigned long long hlsArray_Count;
@property (retain, nonatomic) NSMutableArray *flvArray;
@property (readonly, nonatomic) unsigned long long flvArray_Count;
@property (retain, nonatomic) NSMutableDictionary *hlsPullURLMap;
@property (readonly, nonatomic) unsigned long long hlsPullURLMap_Count;
@property (retain, nonatomic) NSMutableDictionary *pullDatas;
@property (readonly, nonatomic) unsigned long long pullDatas_Count;

+ (id)descriptor;

@end
