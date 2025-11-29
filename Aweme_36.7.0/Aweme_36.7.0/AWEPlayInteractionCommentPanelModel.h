@class NSArray, NSString;

@interface AWEPlayInteractionCommentPanelModel : NSObject <AWEPlayInteractionCommentPanelModelProtocol>

@property (nonatomic) BOOL needScrollToTop;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (retain, nonatomic) NSArray *insertIDs;
@property (nonatomic) unsigned long long intentTab;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL splitChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
