@class NSString, NSURL, UIImage;

@interface AFDStoryDiverseDiggDiggCellModel : AFDStoryDiverseDiggBaseCellModel

@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *animationURL;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long count;

- (void).cxx_destruct;
- (id)init;

@end
