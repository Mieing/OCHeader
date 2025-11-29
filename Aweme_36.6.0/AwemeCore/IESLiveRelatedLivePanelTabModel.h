@class NSString, HTSLiveImage;

@interface IESLiveRelatedLivePanelTabModel : NSObject

@property (retain, nonatomic) NSString *tabTitle;
@property (retain, nonatomic) HTSLiveImage *tabIconImage;
@property (retain, nonatomic) NSString *tabIconImageName;
@property (copy, nonatomic) id /* block */ panelTabCallback;
@property (nonatomic) BOOL hasPaidLive;
@property (nonatomic) unsigned long long tabPriority;

- (void).cxx_destruct;

@end
