@class NSString, NSArray;

@interface AWEIMCreateFansGroupValidateCondationViewModel : NSObject

@property (copy, nonatomic) NSString *titleIconLightURL;
@property (copy, nonatomic) NSString *titleIconDarkURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *descripText;
@property (retain, nonatomic) NSArray *cellModels;

- (void)__constructVMs:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
