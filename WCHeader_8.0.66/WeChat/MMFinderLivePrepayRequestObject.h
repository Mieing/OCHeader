@interface MMFinderLivePrepayRequestObject : MMFinderLivePayRequestObject

@property (nonatomic) unsigned int rewardType;

- (void)retrieveBillToPayWithBlock:(id /* block */)a0;

@end
