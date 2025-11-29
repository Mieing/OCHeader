@class NSString, NSMutableArray;

@interface WCFinderScrollActionSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long secType;
@property (retain, nonatomic) NSMutableArray *items;

- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
