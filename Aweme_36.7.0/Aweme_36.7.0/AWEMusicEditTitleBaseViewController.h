@class NSString;

@interface AWEMusicEditTitleBaseViewController : UIViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSString *enterFromString;
@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) unsigned long long maxLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)validMusicNameCharset;
- (void)editMusicTitleWithMusicID:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (id)replaceSpaceWithText:(id)a0;
- (BOOL)judgeIllegalCharacter:(id)a0;
- (void)updateInputHintStatus;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
