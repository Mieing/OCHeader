@class GPBInt64Array;

@interface HTSLiveXplayHamletAvatarInitContent : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *allAvatarIdsArray;
@property (readonly, nonatomic) unsigned long long allAvatarIdsArray_Count;
@property (nonatomic) long long avatarId;
@property (nonatomic) BOOL multiAvatarMode;

+ (id)descriptor;

@end
