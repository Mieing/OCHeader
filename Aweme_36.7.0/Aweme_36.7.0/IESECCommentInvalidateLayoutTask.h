@class NSIndexPath;

@interface IESECCommentInvalidateLayoutTask : NSObject

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ invalidateLayoutTask;
@property (nonatomic) BOOL isLayoutSizing;

- (void).cxx_destruct;

@end
