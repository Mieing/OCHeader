@class NSString;

@interface MMWebViewHandOffItem : MMHandOffItem <NSCopying>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *icon;

- (id)init;
- (void)setDisplaySourceName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromMinimizeTaskData:(id)a0;
- (void).cxx_destruct;

@end
