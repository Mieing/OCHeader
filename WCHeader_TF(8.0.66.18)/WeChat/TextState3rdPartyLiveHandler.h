@class WCFinderLiveShareItem;

@interface TextState3rdPartyLiveHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) WCFinderLiveShareItem *liveShareItem;

+ (id)liveShareItemFromXML:(id)a0;

- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)reportActivityId;
- (void).cxx_destruct;

@end
