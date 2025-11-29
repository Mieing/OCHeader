@class NSArray, UIColor, NSString;
@protocol AWEIMShareModelProtocol;

@interface AWEShareCellImItemModel : NSObject

@property (nonatomic) BOOL shouldShowAITag;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> imModel;
@property (copy, nonatomic) id /* block */ iconClickCallback;
@property (copy, nonatomic) id /* block */ additionViewClickCallback;
@property (copy, nonatomic) id /* block */ titleClickCallback;
@property (copy, nonatomic) id /* block */ cellClickCallback;
@property (nonatomic) long long dotShowType;
@property (copy, nonatomic) NSArray *recentShareUsers;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) NSString *hasSharedIconAndTextColor;

- (void)p_updateWithShareModel:(id)a0;
- (void)updateAITagStatusIfNeeded;
- (void).cxx_destruct;

@end
