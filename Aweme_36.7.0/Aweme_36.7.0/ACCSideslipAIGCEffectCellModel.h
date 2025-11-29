@class NSString, UIImage, NSIndexPath;
@protocol ACCSideslipPropPickCellCoordinatorProtocol, ACCSideslipPropDataModelProtocol;

@interface ACCSideslipAIGCEffectCellModel : NSObject <ACCSideslipPropBaseCellModelProtocol>

@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isPlaceHolder;
@property (nonatomic) long long loadFailed;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) id<ACCSideslipPropDataModelProtocol> dataModel;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL isDownloadError;
@property (nonatomic) BOOL isMultiStyle;
@property (nonatomic) BOOL isFromCreateCellAdd;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<ACCSideslipPropPickCellCoordinatorProtocol> coordinator;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) BOOL isUnavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)position;
- (void)reset;

@end
