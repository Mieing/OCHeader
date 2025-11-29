@class NSString, NSDate;

@interface AWEUserProfileSpecificationTaskInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long count;
@property (nonatomic) long long taskId;
@property (nonatomic) long long isPreview;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) NSDate *createDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)customerTaskInfoWith:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
