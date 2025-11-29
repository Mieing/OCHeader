@interface BDCastSeekCommand : NSObject

@property (nonatomic) unsigned int startPosition;
@property (nonatomic) unsigned int tag;

- (id)description;

@end
