@class NSNumber, TIMXRange;

@interface TIMXOMessagesDataSourceOptions : NSObject

@property (copy, nonatomic) id /* block */ shouldIncludeMessageFilter;
@property (retain, nonatomic) NSNumber *initialMessageCount;
@property (retain, nonatomic) NSNumber *messageCountPerPage;
@property (retain, nonatomic) TIMXRange *displayRange;

- (void).cxx_destruct;

@end
