@class NSMutableArray, NSMutableIndexSet;

@interface AWEIMGroupChangeInfo : NSObject

@property (retain, nonatomic) NSMutableArray *updateIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableIndexSet *updateSections;
@property (retain, nonatomic) NSMutableIndexSet *insertSections;
@property (retain, nonatomic) NSMutableIndexSet *deleteSections;

- (void).cxx_destruct;
- (id)init;

@end
