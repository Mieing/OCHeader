@class NSString, NSArray;

@interface EcPageData : NSObject

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSArray *data;

- (void).cxx_destruct;

@end
