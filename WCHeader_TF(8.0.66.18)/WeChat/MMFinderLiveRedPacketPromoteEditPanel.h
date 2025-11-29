@class NSString;

@interface MMFinderLiveRedPacketPromoteEditPanel : MMFinderLiveLinkPromoteEditPanel

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *finderUserName;

- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (id)titleText;
- (id)validUriPrefixes;
- (void)onLinkConfirmed:(id)a0;
- (void)fetchRedPacketInfoForLink:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
