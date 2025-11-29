@class NSArray, NSError;

@interface AWELoadPreviousCompletionData : NSObject

@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isHeaderRefreshing;

- (void).cxx_destruct;

@end
