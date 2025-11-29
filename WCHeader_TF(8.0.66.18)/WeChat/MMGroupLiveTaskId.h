@class NSString;

@interface MMGroupLiveTaskId : MMLiveTaskId

@property (nonatomic) unsigned long long liveId;
@property (copy, nonatomic) NSString *roomId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLiveId:(unsigned long long)a0 roomId:(id)a1;
- (id)taskKey;
- (BOOL)isValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
