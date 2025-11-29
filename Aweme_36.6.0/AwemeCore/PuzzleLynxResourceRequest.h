@class NSString, NSMutableArray;

@interface PuzzleLynxResourceRequest : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableArray *callbacks;

- (id)initWithUrlString:(id)a0;
- (void).cxx_destruct;

@end
