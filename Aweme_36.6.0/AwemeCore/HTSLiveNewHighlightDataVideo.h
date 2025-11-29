@class NSString, HTSLiveNewPinCommon;

@interface HTSLiveNewHighlightDataVideo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long videoPinId;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) long long itemId;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long msgId;
@property (nonatomic) long long role;
@property (retain, nonatomic) HTSLiveNewPinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
