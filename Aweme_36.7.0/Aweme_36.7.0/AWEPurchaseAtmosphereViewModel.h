@class NSArray, NSString;

@interface AWEPurchaseAtmosphereViewModel : NSObject

@property (nonatomic) unsigned long long atmosphereType;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (nonatomic) long long num;
@property (retain, nonatomic) NSString *text;

- (BOOL)useNum;
- (BOOL)updateViewModelIsValid:(id)a0;
- (id)getGradientLayerColors;
- (id)getBorderLayerColors;
- (void).cxx_destruct;

@end
