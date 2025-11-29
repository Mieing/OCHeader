@class NSString, WCFinderFeedContentVM;

@interface MegaVideoMinimizeServiceCppModel : NSObject <ILVMinimizeContextModel>

@property (retain, nonatomic) WCFinderFeedContentVM *cachedPlayingContentVM;
@property (retain, nonatomic) WCFinderFeedContentVM *cachedNextContentVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentVMFromMegaFeedData:(id)a0 commentScene:(int)a1;
- (id)playingContentVM;
- (id)nextContentVM;
- (void)updatePlayingContentVM:(id)a0 isFromContinuePlay:(BOOL)a1;
- (void)fetchContinuePlayFeed;
- (id)openParam;
- (int)listType;
- (void).cxx_destruct;

@end
