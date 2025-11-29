@class UIColor, NSString, AWELVideoLibraryFilterDataController, AWELVideoLibraryResultDataController;

@interface AWELVideoLibraryPageContext : AWELVideoBasePageContext

@property (nonatomic) struct CGSize { double width; double height; } filterAreaSize;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) AWELVideoLibraryFilterDataController *filterDataController;
@property (retain, nonatomic) AWELVideoLibraryResultDataController *resultDataController;
@property (copy, nonatomic) NSString *trackParamModule;

- (void).cxx_destruct;

@end
