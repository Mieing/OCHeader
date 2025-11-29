@class NSArray, NSString;

@interface BDSCDeviceListModelGroup : NSObject

@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSString *footerIdentifier;
@property (copy, nonatomic) NSString *headerIdentifier;
@property (nonatomic) double footerHeight;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) BOOL customViewShow;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleLabelBottomMargin;

- (void).cxx_destruct;

@end
