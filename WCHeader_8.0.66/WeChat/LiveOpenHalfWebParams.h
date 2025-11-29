@class NSNumber, NSString, LiveOpenHalfWebParamsArrowBgModeBox;

@interface LiveOpenHalfWebParams : NSObject

@property (retain, nonatomic) NSNumber *halfScreenHeight;
@property (retain, nonatomic) NSNumber *enableFullScreenGesture;
@property (retain, nonatomic) NSNumber *isMenuShown;
@property (retain, nonatomic) NSNumber *isRefreshIconShown;
@property (retain, nonatomic) NSNumber *enableMaskBlur;
@property (retain, nonatomic) NSNumber *navTranslucent;
@property (retain, nonatomic) NSNumber *enableDragToClose;
@property (copy, nonatomic) NSString *navColor;
@property (copy, nonatomic) NSString *halfScreenBackgroundColor;
@property (retain, nonatomic) LiveOpenHalfWebParamsArrowBgModeBox *arrowBgMode;

+ (id)makeWithHalfScreenHeight:(id)a0 enableFullScreenGesture:(id)a1 isMenuShown:(id)a2 isRefreshIconShown:(id)a3 enableMaskBlur:(id)a4 navTranslucent:(id)a5 enableDragToClose:(id)a6 navColor:(id)a7 halfScreenBackgroundColor:(id)a8 arrowBgMode:(id)a9;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
