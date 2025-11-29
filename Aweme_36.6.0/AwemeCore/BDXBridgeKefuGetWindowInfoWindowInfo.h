@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeKefuGetWindowInfoWindowInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *postionX;
@property (retain, nonatomic) NSNumber *postionY;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSNumber *isShowing;
@property (copy, nonatomic) NSString *dragDeleteText;
@property (copy, nonatomic) NSDictionary *stateConfig;
@property (retain, nonatomic) NSArray *pageNameTrace;
@property (copy, nonatomic) NSDictionary *windowExtraInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
