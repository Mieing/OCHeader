@class NSString, NSDictionary, UIView, NSNumber;

@interface AWEShareWebMetaCutScreenInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgURL;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *bgHeight;
@property (retain, nonatomic) NSNumber *bgWidth;
@property (retain, nonatomic) NSNumber *shootHeight;
@property (retain, nonatomic) NSNumber *shootWidth;
@property (retain, nonatomic) UIView *cutView;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
