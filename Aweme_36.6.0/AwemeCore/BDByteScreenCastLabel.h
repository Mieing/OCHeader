@class NSString, BDSCBackgroundUIModel;

@interface BDByteScreenCastLabel : NSObject

@property (retain, nonatomic) BDSCBackgroundUIModel *background;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
