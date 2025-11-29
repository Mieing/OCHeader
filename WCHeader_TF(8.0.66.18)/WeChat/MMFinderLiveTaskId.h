@class NSString;

@interface MMFinderLiveTaskId : MMLiveTaskId {
    NSString *_taskKey;
}

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) BOOL isEnableComment;
@property (nonatomic) unsigned long long lastTaskKeyLiveId;
@property (copy, nonatomic) NSString *finderUserName;
@property (copy, nonatomic) NSString *uniqueId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)taskKey;
- (id)createTaskKey;
- (BOOL)isValid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
