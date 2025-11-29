@class HTSLiveImage, IESLiveAnchorHomelandUpgradeInfo, NSMutableArray, IESLiveAnchorHomelandAreaRank;

@interface IESLiveAnchorHomelandInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *titleImg;
@property (nonatomic) BOOL hasTitleImg;
@property (retain, nonatomic) HTSLiveImage *backgroundImg;
@property (nonatomic) BOOL hasBackgroundImg;
@property (retain, nonatomic) IESLiveAnchorHomelandUpgradeInfo *upgradeInfo;
@property (nonatomic) BOOL hasUpgradeInfo;
@property (retain, nonatomic) IESLiveAnchorHomelandAreaRank *areaRank;
@property (nonatomic) BOOL hasAreaRank;
@property (retain, nonatomic) NSMutableArray *elementsArray;
@property (readonly, nonatomic) unsigned long long elementsArray_Count;

+ (id)descriptor;

@end
