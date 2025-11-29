@class NSString, UIImageView, UILabel, UIView;
@protocol AWEModernFeedCellContext;

@interface AWESearchAIGCVisionErrorReAnswerView : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIView *reAnswerView;
@property (retain, nonatomic) UIImageView *reAnswerImageView;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

@end
