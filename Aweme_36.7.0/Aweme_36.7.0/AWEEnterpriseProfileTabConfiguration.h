@class NSString, NSDictionary, AWEAwemeModel, AWEUserModel;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEEnterpriseProfileTabConfiguration : NSObject

@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *queryDict;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL fromHome;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) unsigned long long profileTabStyle;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (nonatomic) BOOL showTipView;
@property (copy, nonatomic) NSString *tipViewText;
@property (copy, nonatomic) NSString *tipViewTitle;
@property (copy, nonatomic) NSString *tipViewSchema;
@property (copy, nonatomic) id /* block */ containerWidth;
@property (nonatomic) BOOL isPadSplitScreen;

- (void).cxx_destruct;

@end
