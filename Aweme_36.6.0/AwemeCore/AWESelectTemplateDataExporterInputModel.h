@class NSArray;

@interface AWESelectTemplateDataExporterInputModel : NSObject

@property (copy, nonatomic) NSArray *currentTemplateAssets;
@property (copy, nonatomic) NSArray *canReplaceTextFragments;
@property (copy, nonatomic) NSArray *selectCilpViewDisplayFragments;
@property (copy, nonatomic) NSArray *selectCilpViewDisplayNLESlots;

- (void).cxx_destruct;

@end
