@class NSString;

@interface WCFinderTabFilter : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;

+ (id)emptyLocationTipsForType:(unsigned int)a0;
+ (id)emptyTopicTipsForType:(unsigned int)a0;
+ (unsigned int)eventPageIdForType:(unsigned int)a0;

- (id)initWithType:(unsigned int)a0 name:(id)a1;
- (id)initWithTopicFilter:(id)a0;
- (id)initWithPoiStreamFilter:(id)a0;
- (void).cxx_destruct;

@end
