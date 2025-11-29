@class NSMutableDictionary;

@interface IESLiveEventItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long frequency;
@property (retain, nonatomic) NSMutableDictionary *callers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
