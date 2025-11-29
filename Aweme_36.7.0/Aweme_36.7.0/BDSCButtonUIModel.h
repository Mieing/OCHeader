@class NSString, BDSCBackgroundUIModel;

@interface BDSCButtonUIModel : NSObject

@property (retain, nonatomic) BDSCBackgroundUIModel *verticalBackground;
@property (retain, nonatomic) BDSCBackgroundUIModel *horizonBackground;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *selectionColor;
@property (nonatomic) BOOL isSelectedInBold;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void)configWithDefault:(id)a0;
- (void).cxx_destruct;

@end
