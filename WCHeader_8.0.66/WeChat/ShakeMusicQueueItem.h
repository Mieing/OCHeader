@class NSData;

@interface ShakeMusicQueueItem : NSObject

@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int endflag;
@property (nonatomic) unsigned int tryCount;

- (id)debugDescription;
- (void).cxx_destruct;

@end
