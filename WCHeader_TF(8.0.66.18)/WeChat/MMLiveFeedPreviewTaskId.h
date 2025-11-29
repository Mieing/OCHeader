@class NSString;

@interface MMLiveFeedPreviewTaskId : NSObject <NSCopying, MMLiveUniqueTaskId> {
    NSString *_taskKey;
}

@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectID;
@property (retain, nonatomic) NSString *anchorNickName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)taskKey;
- (id)createTaskKey;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
