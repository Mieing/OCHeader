@class NSString, GPBInt64Array;

@interface MultiAnchorEffect : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (retain, nonatomic) GPBInt64Array *effectIdsArray;
@property (readonly, nonatomic) unsigned long long effectIdsArray_Count;

+ (id)descriptor;

@end
