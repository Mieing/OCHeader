@class NSString, AWEECOMIMTextComponentModel, NSArray;

@interface AWEECOMIMQuestionItemCardModel : NSObject

@property (copy, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) AWEECOMIMTextComponentModel *themeTitleComponetModel;
@property (nonatomic) struct CGSize { double width; double height; } themeTitleSize;
@property (copy, nonatomic) NSArray *questionList;

+ (id)questionCardModelWithQuesitonList:(id)a0 questionTitle:(id)a1 cellModel:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })questionThemeTitleInset;

- (void).cxx_destruct;

@end
