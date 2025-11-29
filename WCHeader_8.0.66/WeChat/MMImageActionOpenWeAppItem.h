@class WAWxMaterialOpenInfo, WAReportOpenMaterialItem;

@interface MMImageActionOpenWeAppItem : MMImageActionSheetItem

@property (retain, nonatomic) WAReportOpenMaterialItem *materialItem;
@property (retain, nonatomic) WAWxMaterialOpenInfo *openInfo;

- (id)init;
- (void)handleWithImage;
- (void).cxx_destruct;

@end
