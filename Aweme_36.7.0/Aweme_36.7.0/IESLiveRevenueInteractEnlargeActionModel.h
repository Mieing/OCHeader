@class NSString;

@interface IESLiveRevenueInteractEnlargeActionModel : NSObject

@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL canShowSelfLargeItem;
@property (nonatomic) BOOL canShowAdminLargeItem;
@property (nonatomic) BOOL isInSelfEnlarge;
@property (nonatomic) BOOL isInAdminEnlarge;
@property (nonatomic) BOOL isLargeNotFocus;
@property (nonatomic) BOOL canActionLarge;
@property (nonatomic) BOOL isActionTitleGray;
@property (copy, nonatomic) NSString *disableToast;

- (id)initWithDIContext:(id)a0;
- (void).cxx_destruct;

@end
