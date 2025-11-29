@class NSNumber, NSString;

@interface BDCTDialogShowParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *scene_id;
@property (copy, nonatomic) NSString *key_1;
@property (copy, nonatomic) NSString *key_2;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
