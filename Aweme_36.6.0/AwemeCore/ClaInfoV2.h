@class NSMutableArray, OriginalLanguageInfoV2;

@interface ClaInfoV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *listArray;
@property (readonly, nonatomic) unsigned long long listArray_Count;
@property (retain, nonatomic) OriginalLanguageInfoV2 *originalLanguageInfo;
@property (nonatomic) BOOL hasOriginalLanguageInfo;

+ (id)descriptor;

@end
