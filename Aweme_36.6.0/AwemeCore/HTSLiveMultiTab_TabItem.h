@class NSString, HTSLiveMultiTab_Bubble, GPBInt32Array, GPBInt64Array;

@interface HTSLiveMultiTab_TabItem : IESLivePBBaseMessage

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) long long tabId;
@property (nonatomic) int tabShowType;
@property (retain, nonatomic) GPBInt64Array *hideCameraIdsArray;
@property (readonly, nonatomic) unsigned long long hideCameraIdsArray_Count;
@property (retain, nonatomic) HTSLiveMultiTab_Bubble *bubble;
@property (nonatomic) BOOL hasBubble;
@property (nonatomic) int disablePreload;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) GPBInt32Array *sceneArray;
@property (readonly, nonatomic) unsigned long long sceneArray_Count;
@property (copy, nonatomic) NSString *h5Color;

+ (id)descriptor;

@end
