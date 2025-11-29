@class DataChangeInfo;

@interface SuggestAndDataChangeInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL hasSuggestInfo;
@property (retain, nonatomic) DataChangeInfo *dataChangeInfo;
@property (nonatomic) BOOL hasDataChangeInfo;

+ (id)descriptor;

@end
