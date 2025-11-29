@class NSString;

@interface MMFinderLiveHandOffItem : MMHandOffItem <NSCopying>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *feedObjectId;
@property (copy, nonatomic) NSString *feedNonceId;
@property (copy, nonatomic) NSString *feedLiveId;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
