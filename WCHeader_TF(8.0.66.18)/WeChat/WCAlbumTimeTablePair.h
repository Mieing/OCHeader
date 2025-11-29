@class NSString;

@interface WCAlbumTimeTablePair : NSObject

@property (readonly, copy, nonatomic) NSString *showingStr;
@property (readonly, copy, nonatomic) NSString *timeStr;

+ (id)pairWithShowingStr:(id)a0 timeStr:(id)a1;
+ (id)pairByUInt:(unsigned int)a0;

- (id)initWithShowingStr:(id)a0 timeStr:(id)a1;
- (void).cxx_destruct;

@end
