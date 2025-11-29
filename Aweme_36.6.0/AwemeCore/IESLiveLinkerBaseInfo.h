@class GPBInt64Array, NSString;

@interface IESLiveLinkerBaseInfo : IESLivePBBaseMessage

@property (nonatomic) int scene;
@property (retain, nonatomic) GPBInt64Array *playModesArray;
@property (readonly, nonatomic) unsigned long long playModesArray_Count;
@property (nonatomic) int uiLayout;
@property (nonatomic) long long maxMemberCount;
@property (nonatomic) long long anchorManualOpenUiLayout;
@property (nonatomic) long long crossLinkTimerStart;
@property (copy, nonatomic) NSString *functionType;
@property (nonatomic) long long beforeSceneStart;
@property (nonatomic) BOOL isMultiAvatarMode;

+ (id)descriptor;

@end
