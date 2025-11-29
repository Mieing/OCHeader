@class NSDictionary, AWEUserModel, AWEProfileExtensionAreaCardModel;

@interface AWEProfileExtensionAreaCommonParamModel : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (nonatomic) unsigned long long cardStyle;
@property (nonatomic) unsigned long long cardIndex;
@property (nonatomic) unsigned long long shownCardsCount;
@property (nonatomic) unsigned long long currentPage;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (nonatomic) BOOL superVCDidIsAppearingWhenInitPassCardView;

- (void).cxx_destruct;

@end
