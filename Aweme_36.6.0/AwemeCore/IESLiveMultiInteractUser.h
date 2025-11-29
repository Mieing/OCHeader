@class NSString, HTSLiveImage, NSNumber, IESLiveInteractUserModelWrapper;

@interface IESLiveMultiInteractUser : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *linkMicStrID;
@property (retain, nonatomic) NSNumber *linkMicIntID;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (retain, nonatomic) NSNumber *linkStatus;
@property (retain, nonatomic) NSNumber *linkMicIndex;
@property (retain, nonatomic) NSNumber *roleType;
@property (nonatomic) unsigned long long silenceStatus;
@property (nonatomic) unsigned long long talking;
@property (retain, nonatomic) IESLiveInteractUserModelWrapper *userModel;

- (id)initWithListUser:(id)a0;
- (void).cxx_destruct;

@end
