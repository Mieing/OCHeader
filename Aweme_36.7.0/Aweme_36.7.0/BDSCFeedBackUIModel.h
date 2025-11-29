@class NSString;

@interface BDSCFeedBackUIModel : NSObject

@property (nonatomic) BOOL display;
@property (copy, nonatomic) NSString *schema;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)showFeedBack;
- (void).cxx_destruct;

@end
