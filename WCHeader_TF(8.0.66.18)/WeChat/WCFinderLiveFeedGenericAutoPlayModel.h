@class NSIndexPath;

@interface WCFinderLiveFeedGenericAutoPlayModel : NSObject

@property (retain, nonatomic) NSIndexPath *first;
@property (retain, nonatomic) NSIndexPath *last;

- (BOOL)isEmpty;
- (BOOL)isSinglePlay;
- (BOOL)containIndexPath:(id)a0;
- (void)removeIndexPath:(id)a0;
- (void)removeAll;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
