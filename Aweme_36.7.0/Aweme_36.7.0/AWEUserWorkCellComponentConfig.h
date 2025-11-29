@class NSNumber, NSString, AWEProfileContext;

@interface AWEUserWorkCellComponentConfig : NSObject <AWEUserWorkCellComponentConfigProtocol>

@property (nonatomic) unsigned long long waterFallCardStyle;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) BOOL shouldShowDouGuideTag;
@property (nonatomic) BOOL disableDynamicCover;
@property (nonatomic) BOOL justShowCover;
@property (nonatomic) BOOL ForbbidenCornerComponent;
@property (nonatomic) BOOL enablePadStyle;
@property (nonatomic) BOOL isFromHome;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) NSNumber *hasReachedMaxSelectionCount;
@property (copy, nonatomic) id /* block */ enterUserModelBlock;
@property (copy, nonatomic) id /* block */ currentUserBlock;
@property (copy, nonatomic) id /* block */ shouldShowJustWatchBlock;
@property (nonatomic) long long userWorkType;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL showDateView;
@property (nonatomic) unsigned long long hideSubComponentMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
