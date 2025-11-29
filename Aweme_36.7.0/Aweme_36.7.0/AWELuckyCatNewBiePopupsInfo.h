@class NSString, NSNumber;

@interface AWELuckyCatNewBiePopupsInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popupTitle;
@property (copy, nonatomic) NSString *popupText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *nextButtonText;
@property (retain, nonatomic) NSNumber *popupStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
