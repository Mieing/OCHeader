@class IESLiveInteractUserModelWrapper, NSString, NSNumber, AWEURLModel;

@interface AWELiveMultiInteractUser : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *linkMicStrID;
@property (retain, nonatomic) NSNumber *linkMicIntID;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatarMedium;
@property (retain, nonatomic) NSNumber *linkStatus;
@property (retain, nonatomic) NSNumber *linkMicIndex;
@property (retain, nonatomic) NSNumber *roleType;
@property (nonatomic) unsigned long long silenceStatus;
@property (nonatomic) unsigned long long talking;
@property (retain, nonatomic) IESLiveInteractUserModelWrapper *userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarMediumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
