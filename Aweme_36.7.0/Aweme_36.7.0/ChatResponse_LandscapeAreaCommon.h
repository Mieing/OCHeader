@class GPBInt32Array, NSMutableArray;

@interface ChatResponse_LandscapeAreaCommon : IESLivePBBaseMessage

@property (nonatomic) BOOL showHead;
@property (nonatomic) BOOL showNickname;
@property (nonatomic) BOOL showFontColor;
@property (retain, nonatomic) NSMutableArray *colorValueArray;
@property (readonly, nonatomic) unsigned long long colorValueArray_Count;
@property (retain, nonatomic) GPBInt32Array *commentTypeTagsArray;
@property (readonly, nonatomic) unsigned long long commentTypeTagsArray_Count;

+ (id)descriptor;

@end
