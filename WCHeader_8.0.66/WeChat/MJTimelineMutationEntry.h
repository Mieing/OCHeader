@class OMJID, NSIndexPath;

@interface MJTimelineMutationEntry : NSObject

@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL isVisualClipChanged;

- (id)initWithSegmentID:(id)a0 indexPath:(id)a1 isVisualClipChanged:(BOOL)a2;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
