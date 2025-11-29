@class NSString, UIColor;

@interface EmoticonBoardCrossCollectionEmoticonHeaderModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *designerNameColor;
@property (retain, nonatomic) UIColor *arrowColor;
@property (retain, nonatomic) NSString *designerUin;
@property (retain, nonatomic) NSString *packageId;
@property (nonatomic) BOOL hasReddot;
@property (nonatomic) BOOL isLayoutForExpand;
@property (nonatomic) int newPgae;
@property (nonatomic) unsigned long long index;

- (id)description;
- (BOOL)isCustomPid;
- (BOOL)isSamePackage:(id)a0;
- (BOOL)isSamePackageId:(id)a0;
- (BOOL)isSameDesignerUin:(id)a0;
- (BOOL)shouldRequestEmotionDetailForUpdate;
- (void)reportAction:(int)a0 actionOnNewPid:(id)a1;
- (void).cxx_destruct;

@end
