@class NSString;

@interface BTMissedSubsVideoItemViewModel : BTMissedSubsReaderItemViewModel

@property (readonly, nonatomic) NSString *timeStr;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (id)itemViewClassName;

@end
