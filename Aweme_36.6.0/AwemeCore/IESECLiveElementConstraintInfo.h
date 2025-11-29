@class NSString, NSNumber;

@interface IESECLiveElementConstraintInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *topToTopObj;
@property (copy, nonatomic) NSString *topToBottomObj;
@property (copy, nonatomic) NSString *bottomToTopObj;
@property (copy, nonatomic) NSString *bottomToBottomObj;
@property (copy, nonatomic) NSString *leftToLeftObj;
@property (copy, nonatomic) NSString *leftToRightObj;
@property (copy, nonatomic) NSString *rightToLeftObj;
@property (copy, nonatomic) NSString *rightToRightObj;
@property (copy, nonatomic) NSString *centerYObj;
@property (copy, nonatomic) NSString *centerXObj;
@property (retain, nonatomic) NSNumber *topMargin;
@property (retain, nonatomic) NSNumber *bottomMargin;
@property (retain, nonatomic) NSNumber *leftMargin;
@property (retain, nonatomic) NSNumber *rightMargin;
@property (retain, nonatomic) NSNumber *topPadding;
@property (retain, nonatomic) NSNumber *bottomPadding;
@property (retain, nonatomic) NSNumber *leftPadding;
@property (retain, nonatomic) NSNumber *rightPadding;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
