@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveAIPublicScreenContainer : IESLivePBBaseMessage

@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *welcomeTip;
@property (copy, nonatomic) NSString *areaSchema;
@property (retain, nonatomic) NSMutableArray *abilitiesArray;
@property (readonly, nonatomic) unsigned long long abilitiesArray_Count;

+ (id)descriptor;

@end
