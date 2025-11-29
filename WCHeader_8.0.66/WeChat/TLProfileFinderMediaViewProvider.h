@class NSString, WCFinderDataItem;

@interface TLProfileFinderMediaViewProvider : NSObject <TLProfileMediaViewProvider>

@property (retain, nonatomic) NSString *objectID;
@property (retain, nonatomic) NSString *nonceID;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *expandableHeaderAccessibilityLabel;
@property (readonly, nonatomic) BOOL preferCustomView;
@property (readonly, nonatomic) BOOL useCoverForContent;
@property (readonly, nonatomic) BOOL hidesBlurForShortHeightMedias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportCustomMedia;
- (id)initWithFinderObjectID:(id)a0 nonceID:(id)a1;
- (void)updateInvalidAndGetDetailDataItemIfNeeded;
- (id)title;
- (id)headImageView;
- (id)customView;
- (BOOL)doSourceActionWithViewController:(id)a0;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)reportSourceFeedId;
- (BOOL)isInvalid;
- (void).cxx_destruct;

@end
