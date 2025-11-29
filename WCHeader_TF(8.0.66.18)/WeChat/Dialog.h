@class ImageViewData, NSString, DialogListBasedHalfPage, DialogHalfPageV2ViewData, NSMutableArray, DialogComplianceHalfPageViewData;

@interface Dialog : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *action;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *image;
@property (retain, nonatomic) NSString *viewId;
@property (nonatomic) int contentAlign;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) DialogHalfPageV2ViewData *halfPageDialogV2;
@property (retain, nonatomic) DialogComplianceHalfPageViewData *complianceHalfPage;
@property (retain, nonatomic) ImageViewData *logo;
@property (retain, nonatomic) DialogListBasedHalfPage *listBasedHalfPage;

+ (void)initialize;

@end
