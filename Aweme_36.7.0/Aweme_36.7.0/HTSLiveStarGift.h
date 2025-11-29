@class HTSLiveStarwishGiftContent, NSString, HTSLiveInteractGiftContent, HTSLiveImage;

@interface HTSLiveStarGift : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long diamond;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int giftType;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long repeatCount;
@property (retain, nonatomic) HTSLiveStarwishGiftContent *starwishGiftContent;
@property (nonatomic) BOOL hasStarwishGiftContent;
@property (retain, nonatomic) HTSLiveInteractGiftContent *interactGiftContent;
@property (nonatomic) BOOL hasInteractGiftContent;

+ (id)descriptor;

@end
